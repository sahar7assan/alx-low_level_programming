#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int source_fd, target_fd, read_check, write_check;
	char buffer[1024];
	int close_source, close_target;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file target_file\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	target_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (target_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_check = read(source_fd, buffer, 1024)) > 0)
	{
		write_check = write(target_fd, buffer, read_check);
		if (write_check != read_check)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_source = close(source_fd);
	if (close_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}
	close_target = close(target_fd);
	if (close_target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", target_fd);
		exit(100);
	}

	return 0;
}

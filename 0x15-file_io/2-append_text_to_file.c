#include "main.h"
/**
 * append_text_to_file - function append text
 * @filename: name of file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int newletter;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f  == -1)
		return (-1);

	if (text_content)
	{
		for (newletter = 0; text_content[newletter]; newletter++)
			;

		rwr = write(f, text_content, newletter);

		if (rwr == -1)
			return (-1);
	}

	close(f);

	return (1);
}

#include "main.h"
/**
 * append_text_to_file - function append text
 * @filename: name of file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int newfile;
	int fw, text;

	if (filename == NULL)
		return (-1);

	newfile = open(filename, O_RDWR | O_APPEND);
	if (newfile == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	text = _strlen(text_content);

	fw = write(newfile, text_content, text);
	if (fw == -1)
	{
		return (-1);
	}

	close(newfile);
	return (1);
}

/**
 * _strlen - funtion count len of char.
 * @s: count string.
 * Return: string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

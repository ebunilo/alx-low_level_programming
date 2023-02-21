#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file to be created
 * @text_content: A NULL terminated string to be added to the file
 * Description: Created file must have these permissions rw-------
 * if the file already exists, do not change the permission
 * if the file already exists, truncate it
 * if text_content is NULL, create an empty file
 * if filename is NULL return -1
 *
 * Return: Returns 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}


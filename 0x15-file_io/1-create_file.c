#include "main.h"
/**
 *create_file:-unction that creates a file
 *@filename: is the name of the file to create
 *@text_content: s a NULL terminated string to write to the file
 * Return: -1 fail 1 no problem
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, c;

	if (!filename || !text_content)
		return (-1);
	o = open(filename, 2 | O_CREAT, 0600);
	w = write(o, text_content, strlen(text_content));
	c = close(o);
	if (o == -1 || c == -1 || w == -1)
		return (-1);
	return (1);
}

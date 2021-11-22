#include "main.h"
/**
 *create_file:-unction that creates a file
 *@filename: is the name of the file to create
 *@text_content: s a NULL terminated string to write to the file
 * Return: -1 fail 1 no problem
 */
int create_file(const char *filename, char *text_content)
{
	int field;

	if (!filename || !text_content)
		return (-1);
	field = open(filename, 2 | O_CREAT, 0600);
	if (field == -1)
		return (0);
	write(field, text_content, strlen(text_content) + 1);
	close(field);
	return (1);
}

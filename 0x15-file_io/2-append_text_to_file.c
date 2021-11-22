#include "main.h"
/**
 *append_text_to_file:-function that reads a text file and prints
 *@filename: filename
 *@text_content: erminated string to add at the end of the file
 * Return: decim
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int field;

	if (!filename || !text_content)
		return (-1);
	field = open(filename, O_WRONLY | O_APPEND);
	if (field == -1)
		return (-1);
	write(field, text_content, strlen(text_content) + 1);
	close(field);
	return (1);
}

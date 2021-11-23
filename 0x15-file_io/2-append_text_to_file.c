#include "main.h"
/**
 *append_text_to_file:-function that reads a text file and prints
 *@filename: filename
 *@text_content: erminated string to add at the end of the file
 * Return: -1 error or 0 no 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w = 0, c;

	if (!filename)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strlen(text_content) + 1);
	c = close(o);
	if (o == -1 || w == -1 || c == -1)
		return (-1);
	return (1);
}

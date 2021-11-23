#include "main.h"
/**
 *read_textfile:-function that reads a text file and prints
 *@filename: filename
 *@letters: nbyts
 * Return: decim
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, w, c;
	char *buf = malloc(sizeof(char) * letters);
	ssize_t r;

	if (!filename || !buf)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(stdout, buf, r);
	c = close(o);
	if (r < (ssize_t)letters)
		return (0);
	if (o == -1 || r == -1 || w == -1 || c == -1)
		return (0);
	free(buf);
	return (r);
}

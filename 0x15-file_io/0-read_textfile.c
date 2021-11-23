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
	w = write(0, buf, r);
	c = close(o);
	if (o == -1 || r == -1 || w == -1 || c == -1)
		return (0);
	if (r < (ssize_t)letters)
		r++;
	free(buf);
	return (r);
}

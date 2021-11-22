#include "main.h"
/**
 *read_textfile:-function that reads a text file and prints
 *@filename: filename
 *@letters: nbyts
 * Return: decim
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int field;
	char *buf = malloc(sizeof(filename) * letters);
	ssize_t n_bytes;

	if (!filename || !buf)
		return (0);
	field = open(filename, O_RDONLY);
	if (field == -1)
		return (0);
	n_bytes = read(field, buf, letters);
	if (n_bytes == -1)
		return (0);
	write(0, buf, n_bytes);
	if (n_bytes < (ssize_t)letters)
		n_bytes++;
	return (n_bytes);
}

#include "main.h"

/**
 * main - check the code
 *@argc:count argument
 *@argv:argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file1, file2, c1, c2, w;
	char *buf = malloc(sizeof(char) * 1024);
	ssize_t o = 0;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!buf)
		return (-1);
	file1 = open(argv[1], O_RDONLY);
	o = read(file1, buf, 1024);
	if (file1 == -1 || o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], 2 | O_CREAT | O_TRUNC, 0664);
	while (o > 0)
	{
		w = write(file2, buf, o);
		if (w < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		o = read(file1, buf, 1024);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c1 = close(file2);
	c2 = close(file1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1), exit(100);
	}
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2), exit(100);
	}
	free(buf);
	return (0);
}

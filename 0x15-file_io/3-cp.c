#include "main.h"

/**
 * main - check the code
 *@argc:count argument
 *@argv:argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file1, file2, c1, c2, w, o, o2;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | 2 | O_TRUNC, 0664);
	o = read(file1, buf, 1024);
	o2 = read(file2, buf, 1024);
	if (o == -1 || o2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (o > 0)
	{
		w = write(file2, buf, o);
		if (w < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		o = read(file1, buf, 1024);
	}
	c1 = close(file2);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1), exit(100);
	c2 = close(file1);
	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2), exit(100);
	return (0);
}

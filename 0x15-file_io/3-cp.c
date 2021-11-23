#include "main.h"

/**
 * main - check the code
 *@argc:count argument
 *@argv:argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file1, file2, close1, close2;
	char *buf;
	ssize_t n_bytes = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(argv[1]) * 1024);
	if (!buf)
		return (-1);
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], 2 | O_CREAT | O_TRUNC, 0664);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
	n_bytes = read(file1, buf, 1024);
	write(file2, buf, n_bytes);
	close1 = close(file2);
	close2 = close(file1);
	if (close1 == -1 || close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	free(buf);
	return (0);
}

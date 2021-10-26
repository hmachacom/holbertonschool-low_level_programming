#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *m;

	unsigned int i;
	if (size == 0)
		return (NULL);
	m = malloc(sizeof(char) * (size));
	for (i = 0; i <= size; i++)
	{
		m[i] = c;
	}
	return (m);

}
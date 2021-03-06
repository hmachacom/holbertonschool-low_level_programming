#include "main.h"
/**
 *binary_to_uint:-convert bin to deci
 *@b: linked list
 * Return: decim
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, i, o = 1;
	int lon;

	if (!b)
		return (0);
	for (lon = 0; b[lon] != '\0'; lon++)
	{
		if (b[lon] != '0' && b[lon] != '1')
			return (0);
	}
	lon--;
	i = 0;
	while (lon >= 0)
	{
		count += (o * (b[lon] - '0'));
		lon--;
		i++;
		o = o * 2;
	}
	return (count);
}

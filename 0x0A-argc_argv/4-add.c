#include "main.h"
#include <ctype.h>
/**
 *main:-progrma que suma argumentos \\n
 *@argc: lon array
 *@argv:array
 * Return: correct 0s or 1 erro
 */

int main(int argc, char *argv[])
{
	int i, n, c, l = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			n = isdigit(argv[i][c]);
			if ((n == 0) && (argv[i][c] != '0'))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) == 0 && atoi(argv[i]) != '0')
		{
			printf("Error\n");
			return (1);
		}
		l += atoi(argv[i]);
	}
	printf("%d\n", l);
	return (0);
}

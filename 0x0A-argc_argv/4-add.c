#include "main.h"
/**
 *main:-progrma que suma argumentos \\n
 *@argc: lon array
 *@argv:array
 * Return: correct 0s or 1 erro
 */

int main(int argc, char *argv[])
{
	int i, l = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
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

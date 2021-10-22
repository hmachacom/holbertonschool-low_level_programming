#include "main.h"
/**
 *main:-progrma que multiplica dos argumentos \\n
 *@argc: lon array
 *@argv:array
 * Return: correct 0s or 1 erro
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
		printf("Error");
		return (1);
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}

#include "main.h"
/**
 *main:-progrma que imprime su nombre seguido de \\n
 *@argc: lon array
 *@argv:array
 * Return: Always 0s
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}

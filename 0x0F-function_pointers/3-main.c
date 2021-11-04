#include "3-calc.h"
/**
 * main:-tipo de operacion
 * @argv: The operator
 * @argc: lon
 * Return:-operacion or null
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if (get_op_func(argv[2]) == 0)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(i, j));
	return (0);
}

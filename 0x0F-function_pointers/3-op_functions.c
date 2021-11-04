#include "3-calc.h"

/**
 * op_add:-suma
 * @a: The operator
 * @b: The function associated
 * Return:-operacion
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub:-sustraccion
 * @a: The operator
 * @b: The function associated
 * Return:-operacion
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul:-multiplicacion
 * @a: The operator
 * @b: The function associated
 * Return:-operacion
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div:-divicion
 * @a: The operator
 * @b: The function associated
 * Return:-operacion
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod:-resto
 * @a: The operator
 * @b: The function associated
 * Return:-operacion
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

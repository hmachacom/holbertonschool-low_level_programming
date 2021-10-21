#include "main.h"
/**
 * prime:;- retur primo o no primo
 *@num:num a evaluar
 *@i:iterador
 * Return: 0 si no es primo 1 si es proimo.
 */
int prime(int num, int i)
{
	if (((num % i) == 0) && (num > i))
		return (1 + prime(num, i + 1));
	if (((num % i) != 0) && (num > i))
		return (prime(num, i + 1));
	return (1);
}
/**
 * is_prime_number:;- retur primo o no primo
 *@n:num a evaluar
 * Return: 0 si no es primo 1 si es proimo.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (prime(n, 1) == 2)
		return (1);
	return (0);
}

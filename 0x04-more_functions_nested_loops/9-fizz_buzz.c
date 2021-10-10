#include <stdio.h>
#include "main.h"
/**
*main:-imprimir Fizz Buzz;
*
* Return: Always 0.
*/
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (((n % 3) != 0) && ((n % 5) != 0))
		{
			printf("%d ", n);
		}
		else
		{
			if ((n % 3) == 0)
			{
				printf("Fizz ");
			}
			if ((n % 5) == 0)
			{
				printf("Buzz ");
			}
		}
		n++;
	}
	printf("\n");
    return (0);
}

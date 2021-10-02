#include <stdio.h>
/**
*main:-It seeks to print the numbers from 0 to 9 automatically.
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}

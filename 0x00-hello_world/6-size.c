#include<stdio.h>
/**
 *main - Entry point
 *pirnt size variable type
 *Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
char charType;
long int longIntType;
long long int longLongInt;
printf("Size of char: %zu byte(s)\n", sizeof(charType)); 
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longLongInt));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));

return(0);
}

#include <stdio.h>
/**
*main:-abecedario
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 26;
char abc = 'a';

    while (a != 0)
    {
        putchar(abc);
        abc ++;
        a --;
    }
    return (0);
}

#include "main.h"
/**
 * str_concat:- which contains a copy of the string given as a parameter.
 *@s1:string imput 1
 *@s2:string imput 2
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, m = 0;

	char *migo;

	if ((s1 == NULL) && (s2 != NULL))
		return (s2);
	if ((s2 == NULL) && (s1 != NULL))
		return (s1);
	if ((s2 == NULL) && (s1 == NULL))
		return (NULL);
	while (s1[m] != '\0')
	{
		m++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	m += i;
	migo = malloc(sizeof(char) * (m) + 1);
	if (migo == NULL)
		return (NULL);
	m = 0;
	i = 0;

	while (s1[m] != '\0')
	{
		migo[m] = s1[m];
		m++;
	}
	while (s2[i] != '\0')
	{
		migo[m + i] = s2[i];
		i++;
	}
	migo[i + m + 1] = '\0';
	return (migo);
}

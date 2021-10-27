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

	if ((s2 == NULL) && (s1 == NULL))
	{
		migo = malloc(sizeof(char) * (2));
		return (migo);
	}
	if ((s2 == NULL) && (s1 != NULL))
	{
		for (m = 0; s1[m] != '\0'; m++)
			;
		migo = malloc(sizeof(char) * (m + 1));
		for (i = 0; s1[i] != '\0'; migo[i] = s1[i], i++)
			;
		return (migo);
	}
	if ((s1 == NULL) && (s2 != NULL))
	{
		for (i = 0; s2[i] != '\0'; i++)
			;
		migo = malloc(sizeof(char) * (i + 1));
		for (m = 0; s2[m] != '\0'; migo[m] = s2[m], m++)
			;
		return (migo);
	}
	for (m = 0; s1[m] != '\0'; m++)
		;
	for (i = 0; s2[i] != '\0'; i++)
		;
	m += i;
	migo = malloc(sizeof(char) * (m + 1));
	if (migo == NULL)
		return (NULL);
	for (m = 0; s1[m] != '\0'; migo[m] = s1[m], m++)
		;
	for (i = 0; s2[i] != '\0'; i++)
		;
	migo[i + m + 1] = '\0';
	return (migo);
}

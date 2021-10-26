#include "main.h"
/**
 * _strdup:- which contains a copy of the string given as a parameter.
 *@str:string imput
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i, m = 0;

	char *migo;

	if (str == NULL)
	return (NULL);
	while (str[m] != '\0')
	{
		m++;
	}

	migo = malloc(sizeof(char) * (m));
	if (migo == NULL)
		return (NULL);
	for (i = 0; i <= m; i++)
	{
		migo[i] = str[i];
	}
	if (migo == NULL)
		return (NULL);
	return (migo);
	free(migo);
}

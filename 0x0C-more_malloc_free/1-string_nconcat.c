#include "main.h"

/**
 * string_nconcat:- reserva espacion en memoria dinamica
 *@s1:-string 1
 *@s2:-string 2
 *@n: bytes a copiar
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m;
	char *h;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	else
		i = 1;
	if (s2 != NULL)
	{
		for (m = 0; s2[m] != '\0'; m++)
			;
	}
	else
		m = 1;
	if (n >= m)
		n = m;
	h = malloc(sizeof(char) * (i + n + 1));
	if ((s1 == NULL) && (s2 == NULL))
	{
		h = malloc(sizeof(char) * 2);
		return (h);
	}
	if (h == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; h[i] = s1[i], i++)
			;
	}
	else
		i = 0;
	if (s2 != NULL)
	{
		for (j = 0; j < n; h[i] = s2[j], i++, j++)
			;
	}
	if ((s1 != NULL) && (s2 != NULL))
		h[i + 1] = '\0';
	return (h);
}

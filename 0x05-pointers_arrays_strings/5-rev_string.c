#include "main.h"

/**
 *rev_string:-function that reverses a string
 *@s:-string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
		int g, miu;
	char character;

	for (g = '\0'; s[g] != 0; g++)
	{
	}
	miu = 0;
	for (g = g - 1; miu < g; miu++)
	{
		character = s[g];
		s[g] = s[miu];
		s[miu] = character;
		g--;
	}

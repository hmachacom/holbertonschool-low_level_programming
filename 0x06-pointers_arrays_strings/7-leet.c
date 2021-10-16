/**
 * leet:-funcion que incrypta un texto
 *@encri:string int
 * Return: Always 0.
 */
char *leet(char *encri)
{
	char let[] = "aAeEoOtTlL", num[] = "4433007711";
	int i, l;

	for (i = 0; encri[i] != '\0'; i++)
	{
		for (l = 0; let[l] != '\0'; l++)
		{
			if (let[l] == encri[i])
				encri[i] = num[l];
		}
	}
	return (encri);
}

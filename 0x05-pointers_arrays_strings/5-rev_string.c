#include "main.h"

/**
 *rev_string:-function that reverses a string
 *@s:-string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int u, i; /*variables de control*/

	char *p;/*apuntador para invertir la cadena*/

	char m[500];/*paraalmacenar el valor s mas grade para que funcione con todas*/

	strcpy(m, s);/*copio lo que esta dentro de s en m */
	u = strlen(m) - 1;/*a un le asigno la ultima posicion de la cadena m*/
	p = &m[u];/*a p le asigno la direccion de la ultima posicion de m*/
	for (i = 0; *s != '\0'; i++)/*bcle copiar valores m en s invertidos*/
	{
		*s = *p;/*a lo que esta dentro de s le asigno lo que esta dentro de p*/
		p--;/*le resto 1 posicion a p para ir regresando hasta la posicion inicial*/
		s++;/*le sumo 1 a s para llegar hasta el final de s*/
	}
}

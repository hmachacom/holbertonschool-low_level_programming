#include "function_pointers.h"
/**
 *print_name:-funcion que llama a otra funcion por un puntero
 *@name:-nombre
 *@f:-ni idea
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		(*f)(name);
}

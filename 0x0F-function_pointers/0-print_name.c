#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name to be printed
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	/* Only check for pointers */
	if (!name || !f)
		return;

	f(name);
}

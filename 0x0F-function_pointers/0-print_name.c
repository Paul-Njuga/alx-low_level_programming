#include "function_pointers.h"

/**
 * print - callback function
 * @name: name to be printed
 */
void print(char *name)
{
	printf("Hello, my name %s", name);
}

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f = print;
	f(name);
}

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
 * print name - prints a name
 * @name: name to be printed
 * @f: callback function
 * @: name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
    void (*f)(char *);
    f = print;
    f(name);
}
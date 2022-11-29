#include <stdio.h>

/* first() declaration */
void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main function,
 * is executed
 * *__attribute__((constructor)) is used to execute,
 * *a function when the program starts
 * *__attribute__((destructor)) is used to execute,
 * *the function when main() function is completed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

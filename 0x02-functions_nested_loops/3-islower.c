#include <cytpe.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * Return: 1 || 0
 */

int _islower(int c)
{
	int n = islower(c);
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
}

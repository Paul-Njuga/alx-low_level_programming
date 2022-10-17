#include <stdio.h>

/**
 * main - Prints all possible combinations of three digits
 * @i - First digit
 * @j - Second digit
 * @k - Third digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i != j && j != k)
				{
					if (k > j && j > i)
					{
					putchar(i);
					putchar(j);
					putchar(k);
					/*Handles punctuations*/
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

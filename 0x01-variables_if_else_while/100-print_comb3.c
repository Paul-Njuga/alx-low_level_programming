#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits
 * @i - First digit number
 * @j - Second digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			/**
			 * Both digits must be different i.e. !11, 22... (i != j) solves this
			 *
			 * Any value in the second column less than the value in the first column,
			 * would create a repeat value i.e. 01 = 10 (j > i) solves this
			 */
			if (i != j && j > i)
			{
				putchar(i);
				putchar(j);
				/*Handles punctuations*/
				if (i != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

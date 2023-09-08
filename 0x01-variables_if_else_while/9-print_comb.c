#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0'); /* Convert the digit to its character representation */

		if (digit != 9)
		{
			putchar(','); /* Print a comma after the digit */
			putchar(' '); /* Print a space after the comma */
		}
	}

	putchar('\n'); /* Print a newline character at the end */

	return (0);
}


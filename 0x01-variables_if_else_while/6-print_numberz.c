#include <stdio.h>

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0'); /* Convert the digit to its character representation */
		digit++;
	}

	putchar('\n');

	return (0);
}

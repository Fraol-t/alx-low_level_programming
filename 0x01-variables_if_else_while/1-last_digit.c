#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a random number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	/* Initialize random seed */
	srand(time(0));

	/* Generate a random number and store it in n */
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10; /* Calculate the last digit of n */

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}

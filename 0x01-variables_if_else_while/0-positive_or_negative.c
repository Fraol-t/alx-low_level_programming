#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and determines if it's positive,
 *              negative, or zero, then prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Initialize random seed */
	srand(time(0));

	/* Generate a random number and store it in n */
	n = rand() - RAND_MAX / 2;

	/* Print the number */
	printf("%d is ", n);

	/* Check if n is positive, negative, or zero, and print the result */
	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");

	return (0);
}

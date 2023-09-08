#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
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

    /* Calculate the last digit of n */
    int last_digit = n % 10;

    /* Check if last_digit is greater than 5, equal to 0, or less than 6 and not 0, and print the result */
    printf("Last digit of %d is %d ", n, last_digit);

    if (last_digit > 5)
        printf("and is greater than 5\n");
    else if (last_digit == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return (0);
}

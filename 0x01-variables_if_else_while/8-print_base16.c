#include <stdio.h>

int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
    {
        putchar(digit + '0');  // Convert the digit to its character representation
    }

    for (digit = 'a'; digit <= 'f'; digit++)
    {
        putchar(digit);
    }

    putchar('\n');

    return (0);
}

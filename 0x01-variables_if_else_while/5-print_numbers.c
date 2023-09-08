#include <stdio.h>

int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        putchar(digit + '0');  // Convert the digit to its character representation
    }

    putchar('\n');

    return (0);
}

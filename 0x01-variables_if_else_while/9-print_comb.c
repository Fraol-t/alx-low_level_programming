#include <stdio.h>

int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        putchar(digit + '0');  // Convert the digit to its character representation

        if (digit < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}

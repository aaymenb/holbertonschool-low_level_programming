#include "main.h"

/**
 * main - Check the code for digit characters and non-digit characters.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    // Check all digit characters (0-9)
    for (c = '0'; c <= '9'; c++)
    {
        _putchar(c);  // Output the character
        _putchar(':');
        _putchar(' ');
        _putchar(_isdigit(c) + '0');  // Output 1 (digit)
        _putchar('\n');
    }

    // Check all characters except digits (ASCII 32 to 126)
    for (c = 32; c <= 126; c++)
    {
        if (!(_isdigit(c)))  // Only output if not a digit
        {
            _putchar(c);  // Output the character
            _putchar(':');
            _putchar(' ');
            _putchar('0');  // Output 0 (not a digit)
            _putchar('\n');
        }
    }

    return (0);
}


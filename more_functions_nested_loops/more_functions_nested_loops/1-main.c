#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(_isdigit(c) + '0'); /* Converts the result (1 or 0) to a character */
    _putchar('\n');

    c = 'a';
    _putchar(c);
    _putchar(':');
    _putchar(' ');
    _putchar(_isdigit(c) + '0'); /* Converts the result (1 or 0) to a character */
    _putchar('\n');

    return (0);
}


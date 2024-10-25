#include "main.h"

/**
 * print_alphabet - Affiche l'alphabet en minuscules dix fois.
 *
 * Return: no return
 */

void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar(10);
}

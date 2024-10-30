#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i, num, digit;

	for (i = 0; i < n; i++)
	{
		num = a[i];

		/* Imprimer le signe négatif si nécessaire */
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		/* Imprimer chaque chiffre */
		if (num == 0)
		{
			_putchar('0');
		}
		else
		{
			if (num > 0)
			{
				digit = num;
				/* Utiliser une méthode simple pour extraire et imprimer les chiffres */
				if (digit >= 10)
					print_array(&digit / 10, 1);  // Appel récursif pour imprimer les chiffres
				_putchar((digit % 10) + '0');  // Imprimer le dernier chiffre
			}
		}

		/* Ajouter une virgule et un espace sauf pour le dernier élément */
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');  // Nouvelle ligne à la fin
}


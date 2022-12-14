#include "main.h"

/**
 * print_sign - checks for alphabets
 * @n: character to be checked
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

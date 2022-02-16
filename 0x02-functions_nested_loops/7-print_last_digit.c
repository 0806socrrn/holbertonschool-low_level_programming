#include "main.h"

/**
 * print_last_digit - prints last character of a number
 * @n: Input number
 * type 7
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int i, l;

	i = n % 10;
	l = (i > 0) ? i : -i;

	_putchar('0' + l);
	return (l);
}

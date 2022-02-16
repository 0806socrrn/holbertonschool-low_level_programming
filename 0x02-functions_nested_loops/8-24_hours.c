#include "main.h"

/**
 * jack_bauer - Prints every minute of 24-hour time
 *
 * Return: always 0
 * type 8
 */
void jack_bauer(void)
{
	int j, m;

	for (j = 0; j < 24; j++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}

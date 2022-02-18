#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times,
 *		  separated by a newline
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				putchar('0' + c / 10);

			putchar('0' + c % 10);
		}
		putchar('\n');
	}
}

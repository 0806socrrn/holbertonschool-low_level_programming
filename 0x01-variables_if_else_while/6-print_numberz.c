#include <stdio.h>
/**
 * main - 6. Numberz
 *
 * Return: 0 on success
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

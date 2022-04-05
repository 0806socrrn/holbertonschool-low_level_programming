#include"main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be scanned
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int in = 0;
	unsigned long int num = n;

	while ((num >>= 1) > 0)
		in++;
	while (in >= 0)
	{
		putchar((n >> in) & 1 ? '1' : '0');
		in--;
	}
}

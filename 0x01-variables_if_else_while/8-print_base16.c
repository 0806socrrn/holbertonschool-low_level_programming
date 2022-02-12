#include <stdio.h>
/**
 * main -  the numbers of base 16 in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int f = '0';

	while (f <= '9')
	{
		putchar(f);
		f++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}

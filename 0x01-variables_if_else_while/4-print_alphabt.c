#include <stdio.h>
/**
 * main - alphabet in lowercase
(*
 * Return: 0 on success
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}

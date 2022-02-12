#include <stdio.h>
/**
 * main -  the lowercase alphabet in reverse
(*
 * Return: 0 on success
 */
int main(void)
{
	char s = 'z';

	while (s >= 'a')
	{
		putchar(s);
		s--;
	}
	putchar('\n');
	return (0);
}

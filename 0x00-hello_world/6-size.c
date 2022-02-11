#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("Size of a char: %x byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %x byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %x byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %x byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %x byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

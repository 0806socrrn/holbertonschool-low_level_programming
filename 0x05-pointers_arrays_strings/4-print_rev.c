#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string backwards
 * @s: pointer to the first character in the string
 */
void print_rev(char *s)
{
int c, i;

c = 0;

for (; *s; s++)
c++;

s--;

for (i = 0; i < c; i++)
putchar(*(s--));

putchar('\n');
}

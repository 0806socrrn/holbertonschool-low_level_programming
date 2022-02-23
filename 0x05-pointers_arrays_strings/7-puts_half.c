#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @s: pointer to the first character in the string
 */
void puts_half(char *s)
{
int c, i;

for (c = 0; s[c]; c++)
	;

for (i = (c + 1) / 2; i < c; i++)
putchar(s[i]);

putchar('\n');
}

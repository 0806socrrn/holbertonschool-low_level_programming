#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: pointer to first character of string
 */
void puts2(char *str)
{
int c, i;

c = 0;

while (str[c] != '\0')
{
c++;
}

for (i = 0; i < c; i += 2)
{
putchar(str[i]);
}

putchar('\n');
}

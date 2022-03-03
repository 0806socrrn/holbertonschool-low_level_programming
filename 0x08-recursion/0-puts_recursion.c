#include "main.h"

/**
 * _puts_recursion - uses _putchar recursively to print a string
 * @s: pointer to first char in string to be printed
 */
void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
}

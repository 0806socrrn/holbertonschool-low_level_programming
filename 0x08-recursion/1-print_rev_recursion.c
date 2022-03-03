#include "main.h"

/**
 * _puts_recursion - prints a string backwards using recursion
 * @s: pointer to first char in string to be printed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
putchar(*s);
_print_rev_recursion(s + 1);
}
else
putchar('\n');
}

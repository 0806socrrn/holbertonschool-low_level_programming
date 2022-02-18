#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: lines to print.
 * Return: Always 0
 */

void print_line(int n)
  
{
if (n > 0)
{
int in;

for (in = 1; in <= n; in++)
{
putchar ('_');
}
}
putchar('\n');
}

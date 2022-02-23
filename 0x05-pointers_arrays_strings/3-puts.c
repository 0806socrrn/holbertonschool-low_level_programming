#include "main.h"
/**
 * _puts - Prints a string
 * @str: pointer to string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		putchar(*str);

	putchar('\n');
}

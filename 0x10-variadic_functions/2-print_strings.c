#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string used as separator
 * @n: arg list
 * Return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *va;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		va = va_arg(args, char *);

		if (va == NULL)
			printf("(nil)");
		else
			printf("%s", va);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints `n` numbers given, separated by a given
 * @separator: Pointer to the first character of the string to separate
 * @n: Number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	/* initialize list for num number of arguments */
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(list, int));
	}

	printf("\n");
}

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all of the arguments
 * @n: Number of arguments
 * Return: sum of n numbers of arguments given
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	/* initialize valist for num numbers*/
	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

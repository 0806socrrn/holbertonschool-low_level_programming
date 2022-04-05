#include "main.h"

/**
 * flip_bits - calcs the number of bits you would need
 * @n: First number
 * @m: Second number
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	ret = 0;
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			i += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}

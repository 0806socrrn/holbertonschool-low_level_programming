#include"main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string which contains the binary number
 * Return: the converted number, or 0 if there is one or
 * more chars in the string b
 * that is * not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i, in;

	i = 0;
	in = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			a += (b[i] - '0') << in;
			i--;
			in++;
		}
		else
			return (0);
	}
	return (a);

}

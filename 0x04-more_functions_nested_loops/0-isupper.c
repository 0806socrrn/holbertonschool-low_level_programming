#include "main.h"
/*
* isupper define a uppercase
* @c: Define if a character is uppercase
* Return: 1 if is a uppercase, 0 if not
* type 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

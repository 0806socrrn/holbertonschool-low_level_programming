#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to beginning of string
 * @accept: list of acceptable characters for the prefix
 * Return: Length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count;
unsigned int i, c;

count = 0;
for (i = 0; *s; s++, i++)
{
for (c = 0; accept[c]; c++)
{
if (*s == accept[c])
{
count++;
break;
}
}

if (count <= i)
break;
}
return (count);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, c;

i = 0;
c = 0;

while (dest[i] != '\0')
i++;

while (src[c] != '\0' && c < n)
{
dest[i] = src[c];
c++;
i++;
}

dest[i] = '\0';

return (dest);
}


#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: one  string
 * @s2: two  string
 * @n: Characters to take from s2
 * Return: pointer which cointains s1 followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1, len2;

	len1 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1 = len1 + 1;
	len2 = 0;
	while (s2[len2] != '\0' && n > len2)
		len2 = len2 + 1;
	if (n >= len2)
		n = len2;
	mem = malloc((len1 + len2 + 1) * sizeof(char));
	if (mem == NULL)
		return (NULL);
	len1 = 0;
	while (s1[len1] != '\0')
	{
		mem[len1] = s1[len1];
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0' && n > len2)
	{
		mem[len1] = s2[len2];
		len2++;
		len1++;
	}
	mem[len1] = '\0';
	return (mem);
}

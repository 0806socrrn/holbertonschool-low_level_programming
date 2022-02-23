#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: pointer to the first character in the string
 */
void rev_string(char *s);
{
char actual_char;
int i = 0, j = 0;
while (s[i] != '\0')
i++;
i--;
while (j <= i)
{
actual_char = s[j];
s[j] = s[i];
s[i] = actual_char;
i--;
j++;
}
}

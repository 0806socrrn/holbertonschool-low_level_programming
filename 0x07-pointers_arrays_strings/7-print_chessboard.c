#include "main.h"

/**
 * print_chessboard - prints 8x8 chessboard
 * @a: 2D array with chessboard values
 */
void print_chessboard(char (*a)[8])
{
int i, c;

for (i = 0; i < 8; i++)
{
for (c = 0; c < 8; c++)
putchar(a[i][c]);

putchar('\n');
}
}

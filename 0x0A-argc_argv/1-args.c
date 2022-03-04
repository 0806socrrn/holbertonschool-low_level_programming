#include <stdio.h>
/**
 * main - Prints name of command called
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 * command name
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i = 0;
	if (argc > 0)

	printf("argv[%d] = %s\n", i, argv[i]);

	return (0);
}

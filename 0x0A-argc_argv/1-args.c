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
	if (argv && argc > 1)
		printf("%d\n", argc - 1);

	else
		printf("%d\n", 0);
	return (0);
}

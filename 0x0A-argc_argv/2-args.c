#include <stdio.h>

/**
 * main- print all given arguments
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}

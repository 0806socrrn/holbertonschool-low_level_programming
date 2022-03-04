#include <stdio.h>
#include <stdlib.h>

/**
 * main- print all given arguments
 * @argc: number of arguments including command name
 * @argv: Pointer to array of pointers to arguments as strings including
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int in;
	int sum = 0;

	if (argc > 1)
	{
		while (in < argc)
		{
			sum = sum + atoi(argv[in]);
			in = in + 1;
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

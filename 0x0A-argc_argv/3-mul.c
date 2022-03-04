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
	int in = 1;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		while (in < argc)
		{
			mul = mul * atoi(argv[in]);
			in = in + 1;
		}
		printf("%d\n", mul);
	}
	return (0);
}

#ifndef MAIN_TYPE
#define MAIN_TYPE

/*LITBS*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*PROTOTYPES*/

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif/*MAIN_TYPE*/

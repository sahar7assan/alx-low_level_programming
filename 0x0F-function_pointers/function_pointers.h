#include <stdio.h>
#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTUIN_POINTERS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif 
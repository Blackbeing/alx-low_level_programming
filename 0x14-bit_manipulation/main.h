#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <limits.h>

unsigned int binary_to_uint(const char *b);
unsigned int _is_num(char c);
unsigned int _strlen(const char *str);
int _pow_recursion(int x, int y);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */

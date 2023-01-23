#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct fmt - struct to use the format
 * @form: char pointer
 * Description: struct for fmt
 */
typedef struct fmt
{
	char *form;
	void (*func)(va_list);
} vf;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

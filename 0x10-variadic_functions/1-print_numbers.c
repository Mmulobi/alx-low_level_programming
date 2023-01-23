#include "variadic_functions.h"
/**
 * print_numbers - functions that prints numbers
 * @separator: char argument
 * @n: integer argument
 * @...: unmaned integer
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list ap;

	va_start(ap, n);
	for (; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

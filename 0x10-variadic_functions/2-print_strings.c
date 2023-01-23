#include "variadic_functions.h"
/**
 * print_strings - functions that prints strings
 * @separator: char pointer argument
 * @n: integer argument
 * @...: unnamed argument
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list ap;
	char *s = NULL;

	va_start(ap, n);
	for (; a < n; a++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (a != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

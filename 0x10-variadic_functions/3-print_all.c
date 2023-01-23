#include "variadic_functions.h"
/**
 * op_str - prints a string
 * @lista: va_list argument
 *
 */
void op_str(va_list lista)
{
	char *s = va_arg(lista, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * op_int - prints an integer
 * @lista: va_list argument
 *
 */
void op_int(va_list lista)
{
	printf("%i", va_arg(lista, int));
}
/**
 * op_char - prints a character
 * @lista: va_list argument
 *
 */
void op_char(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 * op_float - prints a float
 * @lista: va_list argument
 *
 */
void op_float(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 * print_all - function that prints everything
 * @format: char pointer argument
 * @...: unnamed argument
 *
 */
void print_all(const char * const format, ...)
{
	int a = 0, b = 0;
	char *sep = "";
	vf var[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_str},
	};
	va_list ap;

	va_start(ap, format);
	while (format != NULL && format[a] != 0)
	{
		b = 0;
		while (b < 4)
		{
			if (var[b].form[0] == format[a])
			{
				printf("%s", sep);
				var[b].func(ap);
				sep = ", ";
			}
			b++;

		}
		a++;
	}
	printf("\n");
	va_end(ap);
}

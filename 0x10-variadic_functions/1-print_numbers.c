#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - Print numbers followed by a new line.
*@separator: The string to be printed between numbers.
*@n: The number passed to the function.
*
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(a);
}

#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0) Success
 */
void print_alphabet_x10(void)
{
	int x;
	char c;

	x = 1;

	while (x <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	x += 1;
	}
}

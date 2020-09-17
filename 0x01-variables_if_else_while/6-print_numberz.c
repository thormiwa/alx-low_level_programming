#include <stdio.h>
/**
 * main - Print all single digit numbers
 *
 * Description: Without using the var char
 * Return: always(0) Success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Print single digit numbers
 *
 * Description: Separated by comma
 * Return: Always(0) Success
 */
int main(void)
{
	int lower;
	int upper;

	upper = 9;

	for (lower = 0; lower <= upper; lower++)
	{
		putchar(lower + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

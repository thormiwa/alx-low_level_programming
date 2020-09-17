#include <stdio.h>
/**
 * main - Prints a list of numbers
 *
 * Description: The numbers are all single digit
 * Return: Always(0) Success
 */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints lower case and upper case alphabets
 *
 * Description: They are sorted
 * Return: Always(0) Success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all alphabets in lowercase
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
	putchar('\n');
	return (0);
}

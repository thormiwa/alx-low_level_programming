#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point. Prints all arguments received.
 * @argc: NUmber of arguments
 * @argv: Array pointer to string
 * Return: Returns Always (0), Success
 */

int main(int argc, char *argv[])
{
	int x;

	x = 0;
	for (; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

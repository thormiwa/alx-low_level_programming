#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - finds the last interger in random number
 *
 * Description: The numbers are generated
 * Return: Always(0) Success
 */
int main(void)
{
	int n, lastInt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastInt = n % 10;

	if (lastInt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastInt);
	else if (lastInt < 6 && lastInt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastInt);
	else if (lastInt > 5)
		printf("Last Digit of %d is %d and is greater than 5\n", n, lastInt);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (1 < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

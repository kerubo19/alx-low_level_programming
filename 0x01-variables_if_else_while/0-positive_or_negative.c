#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() % 2 (2 * RAND_MAX) - RAND_MAX;
	if (n > 0)
		printf("%d is postive\n", a);
	else if (a < 0)
		printf("%d is negative\n", a);
	else
		printf("%d is zero\n", a);
	return (0);
}

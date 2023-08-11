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
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	if (a > 0)
		printf("%d is postive\n", a);
	else if (a < 0)
		printf("%d is negative\n", a);
	else
		printf("%d is zero\n", a);
	return (0);
}

#include "main.h"

/**
 * helper - help to find the squreroot of a natural  nummber
 * @num: integer
 * @start: where calculation to start
 * @end: where calculation to end
 * Return: squreroot
 */
int helper(int num, int start, int end)
{
	int mid, square;

	if (start > end)
		return (end);
	mid = (start + end) / 2;
	square = (mid * mid);
	if (square == num)
		return (mid);
	else if ((mid + 1 + end) / 2 == mid || (start + mid - 1) / 2 == mid)
		return (-1);
	else if (square < num)
		return (helper(num, mid + 1, end));
	else
		return (helper(num, start, mid - 1));
}

/**
 * _sqrt_recursion - funtion to return the natural squreroot of a number
 * @n: int to find square root
 *
 * Return: Squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (helper(n, 0, n));
}

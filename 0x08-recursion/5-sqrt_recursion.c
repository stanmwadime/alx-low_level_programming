#include <stdio.h>
/**
 * sqtRecursion - computes the square root of a natural number
 * @start: initial number
 * @end: given number
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrrot
 */
int sqtRecursion(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (sqtRecursion(start, mid - 1, m));
		if (mid * mid < m)
			return (sqtRecursion(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - prints the natural root of a number
 * @n: given number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursion(2, n, n));
}

#include <stdio.h>
/**
 * factorial - a function to calculate the factorial of a given number
 * @n: given number/integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)

	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

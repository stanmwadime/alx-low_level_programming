#include <stdio.h>
/**
 * _strlen_recursion - finds the lenght of a string
 * @s: pointer to string
 * Return: int length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

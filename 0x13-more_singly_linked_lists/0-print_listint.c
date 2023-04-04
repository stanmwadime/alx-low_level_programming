#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (num);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	listint_t *head = NULL;

	/* Populate the linked list */

	size_t num_nodes = print_listint(head);

	printf("Number of nodes: %lu\n", num_nodes);

	return (0);
}


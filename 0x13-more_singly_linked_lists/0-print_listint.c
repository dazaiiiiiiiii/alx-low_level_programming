#include <stdio.h>
#include "lists.h"

/*
 * print_listint - prints all the
 * elements of a list
 *
 * @number: number of nodes
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h) 
{
	size_t number = 0;

	while (h)
	{
		printf("%d", h->n);
		number++;
		h = h->next;
	}
	return (number);
}

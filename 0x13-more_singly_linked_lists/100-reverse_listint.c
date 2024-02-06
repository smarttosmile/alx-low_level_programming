#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - recursively reverses a listint list
 *
 * @first: node to reverse
 * @second: node after node to reverse
 *
 * Return: void
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)


/**
 * reverse_listint - reverses a listint list
 *
 * @head: list to reverse
 *
 * Return: new head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);

	*head = reverse_recur(*head, NULL);
	return (*head);
}
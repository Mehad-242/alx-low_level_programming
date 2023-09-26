#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}

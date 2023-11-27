#include "lists.h"

/**
 * check_cycle - function to check if singly linked list has a cycle
 * @list: head pointer to singly linked list
 * Return: 0 if no cycle, 1 if cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *rn;

	if (list == NULL)
		return (0);
	if (list->next == NULL)
		return (0);
	rn = list;
	while (rn->next != NULL && rn->next->next != NULL)
	{
		list = list->next;
		rn = rn->next->next;
		if (list == rn)
			return (1);
	}
	return (0);
}

#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 0 if the list does not have a cycle and returns 1 if it does.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *quick = list;

	if (!list)
		return (0);

	while (slow && quick && quick->next)
	{
		slow = slow->next;
		quick = quick->next->next;
		if (slow == quick)
			return (1);
	}

	return (0);
}

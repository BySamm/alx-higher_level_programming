#include "list.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: List to check
 *
 * Return: 0 or 1
 */

int check_cycle(listint_t *list)
{
	listint_t *slo = list;
	listint_t *fast = list;

	if (!list)
	{
		return (0);
	}
	while (slo && fast && fast->next)
	{
		slo = slo->next;
		fast = fast->next->next;
		if (slo == fast)
		{
			return (1);
		}
	}
	return (0);
}

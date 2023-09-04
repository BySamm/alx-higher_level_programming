#include "list.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @l: List to check
 *
 * Return: 0 or 1
 */

int check_cycle(listint_t *l)
{
	listint_t *slow = l;
	listint_t *fast = l;

	if (!l)
	{
		return (0);
	}
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}

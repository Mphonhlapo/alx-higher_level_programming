#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle.
 * @list: Pointer to the beginning of the linked list
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_ptr, *fast_ptr;

	/* Check for an empty list or a list with only one node */
	if (list == NULL || list->next == NULL)
		return (0);

	/* Initialize two pointers, one moving at twice the speed of the other */
	slow_ptr = list;
	fast_ptr = slow_ptr->next;

	/* Traverse the list until the end or a cycle is detected */
	while (slow_ptr != NULL && fast_ptr->next != NULL
	       && fast_ptr->next->next != NULL)
	{
		/* If the two pointers meet, a cycle is detected */
		if (slow_ptr == fast_ptr)
			return (1);

		/* Move the pointers forward */
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	/* No cycle is detected if the loop exits */
	return (0);
}

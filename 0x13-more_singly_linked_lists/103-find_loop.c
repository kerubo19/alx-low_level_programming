#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dog = head;
	listint_t *hare = head;

	while (hare != NULL && dog != NULL && dog->next != NULL)
	{
		hare = hare->next;
		dog = dog->next->next;

		if (hare == dog)
		{
			hare = head;
			while (hare != dog)
			{
				hare = hare->next;
				dog = dog->next;
			}
			return (hare);
		}
	}
	return (NULL);
}

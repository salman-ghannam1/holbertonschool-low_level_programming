#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *del;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	/* حذف العنصر الأول */
	if (index == 0)
	{
		del = *head;
		*head = del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del);
		return (1);
	}

	/* نتحرك حتى نصل للعنصر index - 1 */
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	/* لو وصلنا نهاية القائمة قبل الوصول للمطلوب */
	if (temp == NULL || temp->next == NULL)
		return (-1);

	/* temp->next هو العنصر الذي سنحذفه */
	del = temp->next;
	temp->next = del->next;

	if (del->next != NULL)
		del->next->prev = temp;

	free(del);
	return (1);
}

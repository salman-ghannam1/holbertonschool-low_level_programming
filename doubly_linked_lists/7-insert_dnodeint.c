#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* إذا كان idx = 0 → نضيف في البداية */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	/* نمشي للوصول إلى نود رقم idx - 1 */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* لو ما وصلنا للمكان الصح → ما نقدر نضيف */
	if (temp == NULL)
		return (NULL);

	/* إذا كان الإدراج في نهاية القائمة */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* إضافة في منتصف القائمة */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* ربط الـ next والـ prev */
	new_node->next = temp->next;
	new_node->prev = temp;

	/* تحديث الروابط للنود الحالية واللاحقة */
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

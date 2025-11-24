#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
    size_t Count = 0;

    while (h != NULL)
    {
        Count++;
        h = h->next;
    }

    return (Count);
}

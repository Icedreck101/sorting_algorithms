#include "sort.h"

/**
 * swap_nodes - Swaps the positions of two nodes in a doubly linked list.
 *
 * This function takes the pointers to two nodes in a doubly linked list
 * and swaps their positions while maintaining the integrity of the list.
 *
 * @h: Pointer to the head of the doubly linked list.
 * @i: Pointer to the first node to be swapped.
 * @j: Pointer to the second node to be swapped.
 *
 * Return: No return value.
 */
void swap_nodes(listint_t **h, listint_t **i, listint_t *j)
{
    (*i)->next = j->next;
    if (j->next != NULL)
        j->next->prev = *i;
    j->prev = (*i)->prev;
    j->next = *i;
    if ((*i)->prev != NULL)
        (*i)->prev->next = j;
    else
        *h = j;
    (*i)->prev = j;
    *i = j->prev;
}


#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list of integers using
* the insertion sort algorithm.
*
* This function takes a pointer to the head of a doubly linked list and
* sorts it in ascending order using the insertion sort algorithm.
* It utilizes the swap_nodes function to adjust the positions of nodes.
*
* @list: Pointer to the head of the doubly linked list.
*
* Return: No return value.
*/

void insertion_sort_list(listint_t **list)
{
listint_t *insert, *j, *tmp;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
for (j = (*list)->next; j != NULL; j = tmp)
{
tmp = j->next;
insert = j->prev;
while (insert != NULL && j->n < insert->n)
{
swap_nodes(list, &insert, j);
print_list((const listint_t *)*list);
}
}
}


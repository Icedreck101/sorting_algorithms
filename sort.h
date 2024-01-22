#define _SORTING_H_
#ifndef _SORTING_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(const int *array, size_t size);
void swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **i, listint_t *j);

#endif

#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

/**
* enum bool - Enumeration of Boolean values.
* @false: Represents the boolean value false (0).
* @true: Represents the boolean value true (1).
*/
typedef enum bool
{
false = 0,
true
} bool;

/**
* struct listint_s - Doubly linked list node with an integer value,
* and pointers to the previous and next elements.
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void swap_elements(int *a, int *b);
void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **i, listint_t *j);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

#endif

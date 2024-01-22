#include "sort.h"
#include <stddef.h>
#include <stdbool.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the bubble sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j, n = size;
    bool sort;
    if (array == NULL || size <= 1)
        return;

    for (i = n; i > 1; i--)
    {
        sort = false;
        for (j = 1; j < i; j++)
        {
            if (array[j - 1] > array[j])
            {
                swap_elements(&array[j], &array[j - 1]);
                sort = true;
            }
        }

        if (sort == false)
            break;
    }
}


#include "sort.h"
/**
* quick_sort - Sorts an array of integers using quicksort algorithm.
* @array: Array of integers to be sorted.
* @size: Size of the array.
*
* Description: Uses the Lomuto partition scheme
* and prints array after each swap.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

lomuto_sort(array, size, 0, size - 1);
}


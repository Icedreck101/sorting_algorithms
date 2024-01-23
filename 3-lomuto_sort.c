#include "sort.h"
/**
* lomuto_sort - Recursive implementation
* of quicksort using Lomuto partition.
* @array: Array of integers to be sorted.
* @size: Size of the array.
* @left: Starting index of the array partition to order.
* @right: Ending index of the array partition to order.
*
* Description:
* Recursively applies the Lomuto partition scheme for quicksort.
* Sorts the specified partition of the array in ascending order.
*/
void lomuto_sort(int *array, size_t size, int left, int right)
{
int part;

if (right - left > 0)
{
part = lomuto_partition(array, size, left, right);
lomuto_sort(array, size, left, part - 1);
lomuto_sort(array, size, part + 1, right);
}
}


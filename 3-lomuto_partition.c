#include "sort.h"
/**
* lomuto_partition - Lomuto partition scheme for quicksort.
* @array: Array of integers to be partitioned.
* @size: Size of the array.
* @left: Starting index of the subset to partition.
* @right: Ending index of the subset to partition.
*
* Description:
* This function implements the Lomuto
* partition scheme for quicksort.
* It selects the last element as the pivot,
* partitions the array
* into two subarrays (elements less than and
* greater than the pivot),
* and returns the final partition index.
* Prints the array after each swap.
*
* Return: The final partition index.
*/
int lomuto_partition(int *array, size_t size, int left, int right)
{
int *pivot, above, below;

pivot = array + right;
for (above = below = left; below < right; below++)
{
if (array[below] < *pivot)
{
if (above < below)
{
swap_elements(array + below, array + above);
print_array(array, size);
}
above++;
}
}

if (array[above] > *pivot)
{
swap_ints(array + above, pivot);
print_array(array, size);
}

return (above);
}


#include "sort.h"
/**
* selection_sort - Sort an array of integers
* using the selection sort algorithm.
* @array: Pointer to the array of integers.
* @size: Size of the array.
*
* Description:
* This function implements selection sort,
* repeatedly finding the minimum element
* and swapping it with the first unsorted element.
* Prints the array after each swap.
*/
void selection_sort(int *array, size_t size)
{
int *min;
size_t i, j;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = array + i;
for (j = i + 1; j < size; j++)
min = (array[j] < *min) ? (array + j) : min;

if ((array + i) != min)
{
swap_elements(array + i, min);
print_array(array, size);
}
}
}


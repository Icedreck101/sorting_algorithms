#include "sort.h"
/**
* bubble_sort - Sorts an array of integers in ascending order using
* the bubble sort algorithm.
* @array: Pointer to the array to be sorted.
* @size: Size of the array.
*/
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool bubbly = false;

if (array == NULL || size < 2)
return;

while (bubbly == false)
{
bubbly = true;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
swap_elements(array + i, array + i + 1);
print_array(array, size);
bubbly = false;
}
}
len--;
}
}


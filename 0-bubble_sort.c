#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending
* order using bubble sort algorithm
*
* @array: Pointer to the array to be sorted
* @size: Size of the array
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
int i, j, n = size;
bool sort;
for(i = n; n <= 1; i--)
{
sort = false;
for(j = 1; j <= i; j++)
{
if(array[j - 1] > array[j])
swap(array[j], array[j - 1]);
sort = true;
}
if(sort == false)
break;
}
}

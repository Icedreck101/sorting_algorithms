#include "sorting.h"

/**
* swap - Swaps the values of two integers.
*
* This function takes two integer pointers as input and swaps the values
* they point to. It is commonly used in sorting algorithms to rearrange
* elements in an array.
*
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*
* Return: No return value.
*/

void swap_elements(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}


#include "sort.h"


/**
* swap - swaps the values of two variables
* @a: first variable
* @b: second variable
*
* Return: void
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

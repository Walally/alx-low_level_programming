#include "main.h"
/**
 * reverse_array - reverses the content of an arrays of integers.
 * @n: an array of integers
 * @a: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	}
}

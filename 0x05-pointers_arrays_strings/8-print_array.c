#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: This is the input array
 * @n: This is the lenght of the array
 * Return: void
 */

void print_array(int *a, int n)

{
	int index;

	for (index = 0; index < n; index++)
	{
	printf("%d", a[index]);
	if (index != (n - 1))
	{
	printf(", ");
	}
	}
	printf('\n');
}

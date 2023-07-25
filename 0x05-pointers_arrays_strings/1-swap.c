#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pounter 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int weight = *a;

	*a = *b;
	*b = weight;
}

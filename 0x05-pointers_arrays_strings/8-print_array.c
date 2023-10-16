#include "main.h"
#include <stdio.h>

/**
 * print_array - print the element of an array
 * @a: name of an array
 * @n: size of an array
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

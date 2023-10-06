#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if postive zero or negative
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d number is positive\n", n);
	}
	else if (n==0)
	{
       	        printf("%d number is zero\n", n);
	}
	else
	{
                printf("%d number is negative\n", n);
	}
	return (0);
}

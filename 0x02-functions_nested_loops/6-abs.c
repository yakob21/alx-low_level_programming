#include "main.h"
/**
 * _abs - the main function
 * @c: the number to be computed
 * Return: always  0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

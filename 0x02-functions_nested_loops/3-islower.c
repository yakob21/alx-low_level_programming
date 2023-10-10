#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: th character to be checked
 * Return: 1 fir lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

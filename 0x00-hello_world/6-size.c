#include <stdio.h>
/**
 *  main - A program the prints the size of various computer types
 *  Return: 0 (Success)
 */
int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int : %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Siz of a float: %zu byte(s)\n", sizeof(float));
return (0);
}

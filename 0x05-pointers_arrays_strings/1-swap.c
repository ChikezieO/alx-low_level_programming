#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *@a: swaps the value of b
 *@b: swaps the value of a
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int change;
change = *a;
*a = *b;
*b = change;
}

#include <stdio.h>
/**
 * main - A program that prints the various types of computer sizes
 * Return:0 (Success)
 */
int main(void)
{
	int num;

	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return (0);
}

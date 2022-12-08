#include <stdio.h>

/**
 *main - Entry point
 *
 *print the size of various data types
 *
 *Return: Always return 0 (Success)
 */
int main(void)
{
	long int long_int;
	long long int long_long_int;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

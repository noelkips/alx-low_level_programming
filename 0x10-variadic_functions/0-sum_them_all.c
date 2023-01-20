#include "variadic_functions.h"

/**
 * sum_them_all- returns the sum of all parameters
 * @n: fixed integer
 * Return: 0 (if n == 0) else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

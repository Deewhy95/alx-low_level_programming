#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...);

int sum_them_all(const unsigned int n, ...) 

{
	unsigned i;
	int num = 0;

	/*if (n == 0)*/
	/*return (0);*/
	
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num += va_arg(list, int);
	}
	va_end(list);

	return (num);
}

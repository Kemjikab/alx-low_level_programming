#include <stdarg.h>
#include "variadic_function.h"

/**
 * sum_them_all - returns the sum all the function parameters
 * @n:: the parameters to be sumed
 * Return: the sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0, return 0)
	{
		return (n + va_arg(sum_them_all, int));
	}
}

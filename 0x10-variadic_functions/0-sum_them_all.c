#include <stdarg.h>
#include "variadic_function.h"

/**
 * main - returns the sum all the function parameters
 * @const unsigned int n, ...: the parameters to be sumed
 * Return: the sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n==0, return 0)
	{
		return (n + va_arg(sum_them_all, int));
	}
}

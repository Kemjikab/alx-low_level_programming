#include <stdio.h>
/**
 *
 *_puts_recursion - prints string with a new line
 *@s: The character to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"

/**
 * main- print from 0-9
 * return: void
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;


	}
	_putchar('\n');
}


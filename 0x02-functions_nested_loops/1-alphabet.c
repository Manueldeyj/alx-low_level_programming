#include "main.h"
/**
 * print_alphabet - finctio that prints alphabet inlower case
 *
 * Return: always 0;
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}

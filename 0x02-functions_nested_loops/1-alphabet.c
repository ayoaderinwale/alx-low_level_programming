#include <stdio.h>
#include "main.h"

/**
 * print_alphabe - function to print abc
 *
 * Return: 0
 * program to print all alphabets from a to z
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}

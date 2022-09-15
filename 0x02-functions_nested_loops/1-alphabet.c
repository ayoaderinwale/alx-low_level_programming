#include <stdio.h>
#include "main.h"
/**
 * main -entry point
 * printf() function
 * Return: Always 0 (success)
 * program to print all alphabets from a to z
 */

int main(void)
{
	char ch;

	printf("Alphabets from a - z are: \n");
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c\n", ch);
	}
	return (0);
}

#include <stdio.h>
include "main.h"
/**
 * C program to print all alphabets from a to z
 */

int main(void)
{
	char ch;
	printf("Alphabets from a - z are: \n");
	for(ch='a'; ch<='z'; ch++)
	{
		printf("%c\n", ch);
	}
	return 0;
}

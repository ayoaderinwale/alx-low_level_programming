#include <stdio.h>

/** main - contains agrc and argv
 * argv and argv are for compilation
 *
 * return: always 0
*/
int main(int argc, char *argv[])
{
	print("%d\n", argc-1);
	return (0);
}


#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

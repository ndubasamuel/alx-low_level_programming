#include <stdio.>
#include "main.h"

/**
 * main - prints the name of the program 
 * @argc: argument count 
 * @argv: argument array
 *
 * Return: if 0 (success)
 */

int main(argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

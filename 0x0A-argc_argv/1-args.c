#include <stdio.h>
#include "main.h"



/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument array
 *
 * Return: if 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc -1);

	return (0);
}


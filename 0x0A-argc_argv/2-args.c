#include <stdio.h>
#include <main.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: argument count
 *
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int agc,char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s/n",argv[i]);
	}

	return (0);
}

/*
* File: 0-positive_or_negative.c
* Auth: En-wai Asare
**/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starts as the entry point for code block
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

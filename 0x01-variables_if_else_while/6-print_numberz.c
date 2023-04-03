/*
 * File: 6-print_numberz.c
 * Auth: En-wai Asare
 */

#include <stdio.h>

/**
 * main - Prints numbers 0-10 using only putchar and no char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}

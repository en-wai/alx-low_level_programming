/*
 * File: 5-print_numbers.c
 * Auth: En-wai Asare
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers from 0 to base 10.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0;  num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}

#include "main.h"
/*
 * File: 4-_isalpha.c
 * Auth: En-wai Asare
 */


/**
 * print_sign - Main entry point.
 * Description: Outputs the sign of a number
 * @n: serves as career value
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}


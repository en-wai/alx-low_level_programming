#include "main.h"
/*
 * File: 2-print_alphabet_x10.c
 * Auth: En-wai Asare
 */


/**
 * _islower - Main entry point.
 * Description: Verifies lowercase char
 *@c: received int value
 * Return: 1 if true and 0 if false.
 */
_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

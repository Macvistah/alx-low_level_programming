#include <stdio.h>
#include "main.h"
#include <math.h>
/**
  * print_numbers - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */
void print_numbers(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		putchar('-');
	}

	k /= 10;

	if (k != 0)
		print_numbers(k);

	putchar((unsigned int) n % 10 + '0');

}

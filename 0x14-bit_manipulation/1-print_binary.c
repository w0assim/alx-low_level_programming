#include "main.h"
/**
 * _powerof - to the power
 * @base: base
 * @power: power
 * Return: result
 */
unsigned long int _powerof(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - binary
 * @n: nb
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _powerof(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}


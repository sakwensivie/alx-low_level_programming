#include"main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 *@i: input as int
 *
 * Return: the last digit of the number
 */
int print_last_digit(int i)
{
	i %= 10;
	
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}

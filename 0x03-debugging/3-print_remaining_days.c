#include"main.h"
#include<stdio.h>
/**
 * print_remaining_days - takes a day and prints how
 * many days are left in a year
 * taking leap year into account
 * @month: month in number format
 * @day: day of the month
 * @year: the year
 * Return: none
 */
void print_remaining_days(int month, int day, int year)
{
	int y;

	if ((y % 4 == 0) || ((y % 100 == 0) && (y % 400 == 0)))
	{
		if (month >= 2 && day >= 60)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

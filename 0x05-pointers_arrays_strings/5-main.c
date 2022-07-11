#include"main.h"
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

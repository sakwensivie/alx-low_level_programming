#include"main"
/**
 * _isupper - checks if a char is uppercase or not
 * @c: input as an integer
 * Return: 1 if upper and 0 if not
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

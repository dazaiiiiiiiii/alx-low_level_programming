#include<main.h>
#include<unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[]="_putchar";
	int i = 0;
	while (i <= 7)
	{
		_putchar("_putchar");
		i++;
	}
	_putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints base 16
 * Return: 0
 */
int main(void)
{
	char i;

	int b;

	i = 'a';
	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

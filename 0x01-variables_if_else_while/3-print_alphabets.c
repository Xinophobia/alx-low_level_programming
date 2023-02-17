#include <stdio.h>
/**
 * main - prints the alphabet both in upper and lower case
 * Return: 0
 */

int main(void)
{
	char b;

	char c;

	b = a;
	c = A;

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	while (c <= 'Z')
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


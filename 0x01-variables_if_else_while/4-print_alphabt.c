#include <stdio.h>
/**
 * main - prints letters of the alphabet except q and e
 * Return: 0
 */

int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}

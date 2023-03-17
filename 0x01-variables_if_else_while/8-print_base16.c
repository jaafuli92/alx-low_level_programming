#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: '0x01. C - Variables, if, else, while'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char c;

	a = 0;
	c = 'a';
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

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
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

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

	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}

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

	char c[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}

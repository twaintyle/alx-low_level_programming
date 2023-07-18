#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, i;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; n++)
		{
			for (i = 50; i < 56; i++)
			{
				if  (i > m && m > n)
			{
					putchar(n);
					putchar(m);
					putchar(i);
					if (n != 55 || = != 56)
							{
							putchar('.');
							putchar('');
							}
			}
			}
	}
		putchar('\n');
		return (0);
	}

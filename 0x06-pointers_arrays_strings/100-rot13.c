#include "main.h"
/**
 * rot13 - encode string
 * @s: string to encode
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVXWYZ";
	char b[] = "nopqrstuvxwyzabcdefghijklmNOPQRSTUVXWYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}

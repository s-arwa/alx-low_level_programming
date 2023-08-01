#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 *
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *
 * or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
	int o, p;
	char *w;

	o = 0;
	while (s[o] != '\0')
	{
		p = 0;
		while (accept[p] != '\0')
		{
			if (accept[p] == s[o])
			{
				w = &s[o];
				return (w);
			}
			p++;
		}
		o++;
	}

	return (0);
}

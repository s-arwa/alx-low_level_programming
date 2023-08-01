#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: string
 *
 * @needle: string substring
 *
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int g, h, c;

	g = 0;
	c = 0;
	while (haystack[g] != '\0')
	{
		h = 0;
		while (needle[h + c] != '\0' && haystack[g + c] != '\0'
		       && needle[h + c] == haystack[g + c])
		{
			if (haystack[g + c] != needle[h + c])
				break;
			c++;
		}
		if (needle[h + c] == '\0')
			return (&haystack[g]);
		h++;
		g++;
	}

	return (0);
}

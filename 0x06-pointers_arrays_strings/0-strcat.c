#include "main"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: destnation input
 * @src:  source input
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	int f, e;

	f = 0;
	while (dest[f])
		f++;

	for (e = 0; src[e] ; e++)
		dest[f++] = src[e];

	return (dest);
}

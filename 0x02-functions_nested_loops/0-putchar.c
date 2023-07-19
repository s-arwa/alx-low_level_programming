#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char dev[] = "_putchar";
    int x = 0;

    while (dev[x] != '\0')
    {
        _putchar(dev[x]);
        x++;
    }

    _putchar('\n');
    return (0);
}

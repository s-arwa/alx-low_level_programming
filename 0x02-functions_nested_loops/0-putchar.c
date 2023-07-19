#include "main.h"

/**
* main - main block
* Description: Print _putchar followed by a new line.
* Return: 0
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


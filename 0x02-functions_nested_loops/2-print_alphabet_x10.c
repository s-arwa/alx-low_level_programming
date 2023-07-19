#include"main.h"

/**
* print_alphabet_x10 - function will print print_alphabet 10 times
*
*/

void print_alphabet_x10(void)
{
int line, var;

for (line = 0; line <= 9; ++line)
{
for (var  = 'a'; var <= 'z'; ++var)
_putchar(var);
_putchar('\n');
}
}

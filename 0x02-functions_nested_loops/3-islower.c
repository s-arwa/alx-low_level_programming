#include "main.h"

/**
* _islower - check for lowercase characters
* @c: The character to be checked.
* returns 1 if 'c' is lowercase
* returns 0 otherwise 
*/

int _islower(int c);
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}

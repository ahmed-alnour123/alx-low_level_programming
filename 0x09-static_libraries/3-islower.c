#include "main.h"
/**
* _islower - check for lowercase characters
* @c: input character
* Return: boolean
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

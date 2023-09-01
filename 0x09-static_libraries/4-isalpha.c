#include "main.h"

/**
* _isalpha - check if alpha character
* @c: input
* Return: boolean
*
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

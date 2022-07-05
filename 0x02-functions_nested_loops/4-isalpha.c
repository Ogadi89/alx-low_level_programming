#include "main.h"

/**
* _isalpha - checks for alphabetical letter
* @c: a character to be checked on
* Return: returns 0 or 1 depending on the condition
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

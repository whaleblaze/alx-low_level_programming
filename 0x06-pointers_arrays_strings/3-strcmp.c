#include "main.h"
/**
*_strcmp - compare two strings
*@s1: A pointer to a character that will be changed
*@s2: A pointer to a character that will be changed
*Return: dest
*/

int _strcmp(char *s1, char *s2)

{

char *a = s1;
char *b = s2;


while (*a != '\0' && *b != '\0' && *a == *b)
{
a++;
b++;
}

return (*a - *b);
}

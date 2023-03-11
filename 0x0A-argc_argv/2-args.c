#include "main.h"


/**
* main - a program that prints all arguments it receives, one per line
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}

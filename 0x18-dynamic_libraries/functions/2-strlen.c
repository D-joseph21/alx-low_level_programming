#include "main.h"

/**
 * _strlen - checks the lenght of the string
 * @s: - string to be checked
 * Return: The length of the strig
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}

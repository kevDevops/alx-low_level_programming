#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size 'size' and assign the character 'c'
 * @size: size of the array
 * @c: character to assign
 *
 * Description: Create an array of size 'size' and assign the character 'c'
 * to each element. Return: A pointer to the created array, or NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

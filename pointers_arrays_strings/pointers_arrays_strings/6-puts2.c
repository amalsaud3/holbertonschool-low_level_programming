
#include <unistd.h>

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		write(1, &str[i], 1);
		i += 2;
	}

	write(1, "\n", 1);
}

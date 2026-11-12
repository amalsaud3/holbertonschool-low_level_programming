
#include <unistd.h>

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	i = (len + 1) / 2;

	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}

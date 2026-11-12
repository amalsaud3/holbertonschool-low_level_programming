/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to find
 *
 * Return: Pointer to character or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (c == '\0')
		return (&s[i]);

	return (0);
}

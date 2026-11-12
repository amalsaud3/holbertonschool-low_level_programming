/**
 * _strpbrk - Searches for any accepted character
 * @s: String to search
 * @accept: Characters to find
 *
 * Return: Pointer to match or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (0);
}

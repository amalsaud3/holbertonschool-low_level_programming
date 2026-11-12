/**
 * _strspn - Gets length of initial matching segment
 * @s: String to check
 * @accept: Accepted characters
 *
 * Return: Number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
			j++;

		if (accept[j] == '\0')
			break;

		i++;
	}

	return (i);
}

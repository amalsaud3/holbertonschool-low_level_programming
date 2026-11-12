/**
 * _strncpy - Copies at most n characters to a buffer
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

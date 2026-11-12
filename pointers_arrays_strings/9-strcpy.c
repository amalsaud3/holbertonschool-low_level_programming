/**
 * _strcpy - Copies a string to a buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

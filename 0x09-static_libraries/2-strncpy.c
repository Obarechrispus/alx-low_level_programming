/**
 * _strncpy - es a strin
 * @dest: Destinatiopointer to th string
 * @src: Source heter to the ring to copy
 * @n: Number  bytes to
 * Return: Pnter to the destina
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

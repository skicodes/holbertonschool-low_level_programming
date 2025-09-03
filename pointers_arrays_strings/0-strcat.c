#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src
 *           to the end of the string pointed to by dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* Find the end of dest */
    while (dest[i] != '\0')
        i++;

    /* Append src to dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Add terminating null byte */
    dest[i] = '\0';

    return (dest);
}

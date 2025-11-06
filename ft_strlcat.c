#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t indice;
    size_t j;

    indice = 0;
    j = 0;
    while(dst[indice] != '\0')
        indice++;
    while((src[j] != '\0') && (indice < size))
    {
        dst[indice] = src[j];
        src++;
        indice++;
    }
    return (strlen(dst) + strlen(src));
}
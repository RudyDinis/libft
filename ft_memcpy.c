#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char*)src;
    size_t indice;

    indice = 0;
    while(indice < n)
    {
        d[indice] = s[indice];
        indice++;
    }

    printf("\n");
    return d;
}
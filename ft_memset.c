#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t indice;

    indice = 0;
    unsigned char *p = (unsigned char *)s;

    while(indice < n)
    {
        p[indice] = (unsigned char)c;
        indice++;
    }
    return s;
}
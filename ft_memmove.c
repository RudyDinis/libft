#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *c_dst;
    const unsigned char *c_src;
    size_t i;

    if (!dst && !src)
        return NULL;

    c_dst = (unsigned char *)dst;
    c_src = (const unsigned char *)src;

    if (c_dst > c_src && c_dst < c_src + len)
    {
        i = len;
        while (i > 0)
        {
            i--;
            c_dst[i] = c_src[i];
        }
    }
    else
    {
        for (i = 0; i < len; i++)
            c_dst[i] = c_src[i];
    }
    return dst;
}

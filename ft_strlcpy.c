#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while(src[j] != '\0')
        j++;
    while(src[i] != '\0')
    {
        if (i == size)
            break;
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return j;
}
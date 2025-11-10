#include "libft.h"

char *ft_strdup(const char *string)
{
    char *dest;
    size_t i;

    dest = (char *)malloc(ft_strlen(string) + 1);
    i = 0;
    if (!dest)
        return (NULL);
    while(string[i])
    {
        dest[i] = string[i];
        i++;
    }

    dest[i] = '\0';
    return (dest);
}
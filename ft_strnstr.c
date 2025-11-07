#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    while(big[i] && i <= len)
    {
        if (big[i] == little[0])
        {
            j = 0;
            while(big[i + j] == little[j] && i + j <= len)
            {
                if (little[i + j] == '\0')
                    return ((char *) little);
                j++;
            }
        }
        i++;
    }
    return (0);
}

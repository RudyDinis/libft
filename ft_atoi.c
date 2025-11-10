#include "libft.h"

int ft_atoi( const char * src )
{
    int indice;
    int signe;
    int res;

    indice = 0;
    signe = 1;
    res = 0;
    while (src[indice] == '\t' || src[indice] == '\n' || src[indice] == ' ' || src[indice] == '\v' || src[indice] == '\f' || src[indice] == '\r')
    {
        indice++;
    }
    while (src[indice] == '-' || src[indice] == '+')
    {
        if (src[indice] == '-')
            signe = signe * -1;
        if (src[indice + 1] == '-' || src[indice + 1] == '+')
            return 0;
        indice++;
    }
    while (src[indice] >= '0' && src[indice] <= '9')
    {
        res = res * 10 + (src[indice] - 48);
        indice++;
    }
    return (signe * res);
}
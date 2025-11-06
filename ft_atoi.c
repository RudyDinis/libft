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
    if(src[indice] == '-' || src[indice] == '+')
        signe *= src[indice] - 48;
    printf("%d\n", 1*src[indice]);
    while (src[indice] >= '0' && src[indice] <= '9')
    {
        res *= 10;
        res += src[indice] - 48;
        indice++;
    }
    return (res);
}
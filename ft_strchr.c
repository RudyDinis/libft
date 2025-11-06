#include "libft.h"

char * ft_strchr( const char * string, int searchedChar )
{
    size_t indice;

    indice = 0;
    while(string[indice] != searchedChar)
    {
        indice++;
    }
    if (string[indice] == searchedChar)
        return (char *)string[indice];
    else
        return NULL;
}
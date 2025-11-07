#include "libft.h"

char * ft_strrchr( const char * string, int searchedChar )
{
    size_t indice;

    indice = 0;
    while(string[indice] != '\0')
        indice++;
    while(string[indice] != searchedChar)
    {
        indice--;
    }
    if (string[indice] == searchedChar)
        return (char *)&string[indice];
    else
        return NULL;
}
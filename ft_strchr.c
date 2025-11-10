#include "libft.h"

char * ft_strchr( const char * string, int searchedChar )
{
    while (*string)
        {
            if (*string == (char)searchedChar)
                return ((char *)string);
            string++;
        }
        if ((char)searchedChar == '\0')
            return ((char *)string);
        return (NULL);
}
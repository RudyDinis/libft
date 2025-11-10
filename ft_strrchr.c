#include "libft.h"

char * ft_strrchr( const char * string, int searchedChar )
{
    int indice;

    indice = 0;
    while(string[indice])
        indice++;
    while (indice >= 0)
	{
		if (string[indice] == (char)searchedChar)
			return ((char *)&string[indice]);
		indice--;
	}
        return NULL;
}
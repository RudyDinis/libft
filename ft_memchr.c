#include "libft.h"

void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size )
{
    size_t i;
    unsigned char * memory;

    memory = (unsigned char *)memoryBlock;
    i = 0;
    while (i < size)
    {
        if (memory[i] == (unsigned char)searchedChar)
            return ((void *)&memory[i]);
        i++;
    }
    return(NULL);
}
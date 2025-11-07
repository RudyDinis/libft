#include "libft.h"

void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size )
{
    size_t i;
    unsigned char * memory;

    memory = (unsigned char *)memoryBlock;
    i = 0;
    while (memory[i] && i <= size)
    {
        if (memory[i] == searchedChar)
            return ((char *)&memory[i]);
        i++;
    }
    return(NULL);
}
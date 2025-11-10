#include "libft.h"

void * ft_calloc( size_t elementCount, size_t elementSize )
{
    unsigned char *pointer;
    size_t i;

    pointer = malloc(elementCount * elementSize);

    if (!pointer)
        return (NULL);
    i = 0;
    while (i < elementCount * elementSize)
    {
        pointer[i] = 0;
        i++;
    }
    return (pointer);
}
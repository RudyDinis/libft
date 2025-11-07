#include "libft.h"

void * ft_calloc( size_t elementCount, size_t elementSize )
{
    char *pointer;
    size_t i;

    pointer = malloc(elementCount * elementSize);

    if (!pointer)
        return (NULL);
    i = 0;
    while (i <= elementCount)
    {
        pointer[i] = 0;
        i++;
    }
    return ((void *)pointer);
}
#include "libft.h"
/*The only difference with malloc is that initialize memory with 0, while malloc initialize with garbage value
We use function malloc to calculate the total memory, and then we use ft_bezero to initialize that total memory 
to O. */
void *ft_calloc(size_t count, size_t size)
{
    char *memory; 

    memory = malloc (count * size);
    if (!memory)
    {
        rerturn (0);
    }
    ft_bzero(memory, count * size);
    return memory; 
}

/*
Another way to do it is using the function ft_memset. This function fill with specific value the bytes of memory

ft_memset(memory, 0, count * size) --> This do the the same function as ft_bzero. 
*/
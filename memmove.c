#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{   
    char *source;
    char *destination;
    size_t  i;

    source = (char *)src;
    destination = (char *)dest;
    i = 0;

    if (destination > source )
    
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
}
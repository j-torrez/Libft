#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{   
    size_t  i; 

    if (!dest && !src) //check wheter dest and source are both NULL.  
    {
        return(0);
    }

    i = 0;
    if ((size_t)dest - (size_t)src < n) //Check if there is a posibility to overlap 
    {
        i = n - 1; // last index 
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i]; //Copy in revarse order to avoid overwriting data 
            i--;
        } 
    }
    else
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return dest;
}
/*
int main(void)
{
    char src[] = "Hello World!";
    char dest[20];

    ft_memmove(dest, src, 13);

    printf("Copied string is %s\n", dest);

    return 0; 
}   */

int main(void)
{
    char buffers[10] = "abcdefghi";
    ft_memmove(buffers + 3, buffers, 6);
    printf("This is the result %s\n", buffers);
}
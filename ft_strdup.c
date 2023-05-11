#include "libft.h"

/* Allocate sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it*/

char *ft_strdup(const char *s1)
{
    size_t  i; 
    size_t  size;
    char    *copy; 

    size = (ft_strlen(s1) + 1); //Plus the null terminator
    copy = (char *) malloc(sizeof(char) * size); // Allocate memory

    if (!copy)
    {
        return (0);
    }
    i = 0; 
    while (i < size)
    {
        copy[i] = s1[i]; //Copy item 
        i++;
    }
    return (copy);
}
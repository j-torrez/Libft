#include "libft.h"

char *ft_strrchr (const char *s, int c)
{
    int i;

    i = ft_strlen(s);
/*//By adding 'i' to the base address 's' we move the pointer to the position just after the last character
    of the string which is the null character is located*/
    while (i >= 0 )
    {
        if (s[i] == c)
        {
            return ((char *)s + i); //s[i] --> Check if it is the same 
            i--;
        }
    }
    if (c == '\0')
    {
        return ((char *) s + i);
    }
    return 0; 
}
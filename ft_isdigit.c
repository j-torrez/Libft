#include <stdio.h>

int ft_isdigit (int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1); 
    }
    else
    {
        return(0);
    }
}

int main(void)
{
   unsigned char c = 't';

    if (ft_isdigit(c))
    {
        printf("is num");
    }
    else
    {
        printf("is not num");
    }
}
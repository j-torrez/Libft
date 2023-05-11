#include "libft.h"

int atoi(const char *str)
{
    int i; 
    int res; 
    int sign; 

    i = 0; 
    res = 0;
    sign = 1; 

    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
    {
        i++;
    }

    if (str[i] == '-')
    {
        sign *= -1; 
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res * sign; 
    
}
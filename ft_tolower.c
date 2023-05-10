#include <stdio.h>

int ft_toupper (int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32; 
    }
    return (c);
}

int main(void)
{
    unsigned char result; 
   result = ft_toupper('k');
   printf("result: %c", result);
    return (0);
}
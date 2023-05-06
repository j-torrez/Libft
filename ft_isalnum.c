#include <stdio.h>

int isalnum (int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z') || (c >= '0' && c <= '9'))
    {
        return(1);
    }
    else 
    {
        return(0);
    }
}

int main(void)
{
    unsigned char c;

    c = '-';
    if (isalnum(c))
    {
        printf("%c, Is alphanum", c);
    }
    else
    {
        printf("%c, NOT alphanum", c);
    }
}
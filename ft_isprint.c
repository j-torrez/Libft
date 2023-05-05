#include <stdio.h>

int isprint(c)
{
    if (c >= 32 && c <= 126)
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

    c = ' ';

    if (isprint(c))
    {
        printf("is printable");
    }
    else
    {
        printf("Not printable");
    }
}
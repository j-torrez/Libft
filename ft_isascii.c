#include <stdio.h>

int isascii(int c)
{
    if ((c >= 0 && c <= 127))
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

    c = '9';
    if (isascii(c))
    {
        printf("%c, is ascii", c );
    }
    else
    {
        printf("%c, is not part of ascii", c);
    }
}

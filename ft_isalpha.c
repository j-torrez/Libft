#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c  >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1; 
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    unsigned char d = 'Z';
    if (ft_isalpha(d) == 1)
    {
        printf("Belongs to Alpha");
    }
    else
    {
        printf("Doesn't belong Alpha");
    }
}

/* 
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c = 'B';
    if (isalpha(c))
    {
        printf("%c is an alphabet", c);
    }
    else
    {
        printf("%c is not an alpha",c);
    }
}
*/
#include <stdio.h>



size_t ft_strlen(const char *s)
{
    size_t i; 

    i = 0; 
    while (s[i] != '\0')
    {
        i++;
    }
    return (i); 
}

int main(void)
{
    char s [] = "Hello World";
    int result = ft_strlen(s);

    printf("The total lenght is %d. \n", result);
    return(0);
}
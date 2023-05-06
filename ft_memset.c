#include <stdio.h>
#include <string.h> 

//void *s: a pointer to the block of memory to set, (void --> any data type)
//int c: the value to set each byte to
//size_t n: the number of byte to set to 


void *ft_memset(void *s, int c, size_t n)
{
    size_t  i;  

    i = 0; 
    while (i < n) 
    {
        ((unsigned char *) s)[i++] = c; //Filled the array with the character for each iteration
    }
    return (s); //return s, because point to the start of memory block that was filled (newstr)
}

int main(void)
{
    char s[50] = "Hello World!";
    printf("Before memset(): %s\n", s);

    ft_memset(s, 'z', 5); //fill with z
    printf("After memset(): %s\n", s);

    return 0;
}
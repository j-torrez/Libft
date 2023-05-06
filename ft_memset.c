#include <stdio.h>
#include <string.h> 

//void *s: a pointer to the block of memory to set, (void --> any data type)
//int c: the value to set each byte to
//size_t n: the number of byte to set to 


void *ft_memset(void *s, int c, size_t n)
{
    size_t  i; 
    unsigned char *newstr; //Create a new pointer to object, to be filled. 

    i = 0; 
    newstr = (unsigned char *)s;

    while (i < n) 
    {
        newstr[i++] = (unsigned char)c; //Filled the array with the character for each iteration
    }
    return (s); //return s, because point to the start of memory block that was filled (newstr)
}

int main(void)
{
    char s[50] = "Hello World!";
    printf("Before memset(): %s\n", s);

    ft_memset(s, 'z', 5); //fill with s 
    printf("After memset(): %s\n", s);

    return 0;
}
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t remain_len;
    size_t i;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    remain_len = size - dst_len; 

    if (!size) //if number to byte to copy is null, return the the total size of src. 
        return (src_len);
    
    if (dst_len >= size) //if the lenght of destination is larger than the total destination buffer, return (srclen + size) in order to know how many bytes we need. 
        return (src_len + size);

    while (src[i] != '\0' && i < (remain_len - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    
    return (dst_len + src_len);
}

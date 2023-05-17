#include "libft.h"
/*
lst: The beginning of the list.
Return: The length of the list.
*/
int ft_lstsize(t_list *lst)
{
    size_t i;
    t_list *ptr = 0;

    i = 0;
    ptr = lst;
    if (!lst)
        return (0);
    while (ptr != 0)
    {
        i++;
        ptr = ptr->next;
    }
    return (i);
}
#include "libft.h"
/*
    lst = the beginning of the list
    return = last node
*/
t_list *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    if (!lst)
        return (0);
    ptr = lst;
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }
    return (ptr);
}
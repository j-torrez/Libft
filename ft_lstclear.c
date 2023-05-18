#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == 0 || *lst == 0)
        return;

    t_list *current;
    t_list *next;

    current = *lst;
    next = 0;
    while (current != 0)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }

    *lst = 0;
}
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
    t_list *mainh;
    t_list *temp;
    t_list *new;

    if (!lst)
        return (0);
    mainh = ft_lstnew((*f)(lst->content));
    if (!mainh)
        return (0);
    temp = lst->next;
    while (temp != 0)
    {
        new = ft_lstnew((*f)(temp->content));
        if (!new)
        {
            ft_lstclear(&mainh, del);
            return (0);
        }
        ft_lstadd_back(&mainh, new);
        temp = temp->next;
    }
    return (mainh);
}
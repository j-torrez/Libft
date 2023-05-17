/* lst: The node to free
    del: The address of the function used to delete
    the content*/
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == 0)
        return;
    else
    {
        del(lst->content);
    }
    free(lst);
}
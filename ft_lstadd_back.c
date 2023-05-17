/* lst: The address of a pointer to the first link of the list
    new: The address of a pointer to the node to be added to the list
*/

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (!lst || !new)
        return;
    if (*lst == 0)
        *lst = new;
    else
    {
        temp = ft_lstlast(*lst);
        temp->next = new;
    }
}
/*
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
}
*/
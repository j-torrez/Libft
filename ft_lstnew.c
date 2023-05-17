#include "libft.h"
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}   */
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!(list))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}   */
t_list *ft_lstnew(void *content)
{
    t_list  *head;

    head = (t_list *)malloc(sizeof(t_list));
    if(!head)
        return (0);
    head -> content = content;
    head -> next = 0;
    return (head); 
}  
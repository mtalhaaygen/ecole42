#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	int i;

	if(!new)
		return;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	i = ft_lstsize(lst[0]);
	lst[i - 1]->next = new;
}

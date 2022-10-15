#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	int i;

	i = 0;
	if(!*lst)
		return ;
	while (lst[i])
	{
		ft_lstdelone(lst[i], del);
		i++;
	}
	lst[i] = 0;
}

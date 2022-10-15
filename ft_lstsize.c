#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while(lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main()
{
	t_list	**lst;
	void *content;

	lst = (t_list **)malloc(sizeof(t_list *)*10);

	ft_lstadd_front(lst, ft_lstnew(content));	
	ft_lstadd_front(lst, ft_lstnew(content));
	printf("%d",ft_lstsize(lst[0]));
	return 0;
}*/

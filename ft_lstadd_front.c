/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:40:20 by maygen            #+#    #+#             */
/*   Updated: 2022/10/21 15:04:36 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list	*root;
	t_list	*iter;
	int		i;

	root = malloc(sizeof(t_list));
	root -> content = "first";
	root -> next = NULL;
	i = 0;
	while (i < 5)
	{
		iter = ft_lstnew("str");
		ft_lstadd_front(&root, iter);
		i++;
	}
	while (iter)
	{
		printf("%s\n", iter->content);
		iter = iter -> next;
	}
}

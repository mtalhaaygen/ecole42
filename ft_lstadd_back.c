/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:40:57 by maygen            #+#    #+#             */
/*   Updated: 2022/10/21 10:30:40 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	i = ft_lstsize(*lst);
	lst[i - 1]->next = new;
}

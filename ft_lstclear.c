
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:43:53 by maygen            #+#    #+#             */
/*   Updated: 2022/10/16 12:43:53 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	int i;

	i = 0;
	if(!lst[0])
		return ;
	while (lst[i])
	{
		ft_lstdelone(lst[i], del);
		i++;
	}
	lst[i] = 0;
}

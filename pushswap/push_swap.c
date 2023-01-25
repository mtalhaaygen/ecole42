/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:08:36 by maygen            #+#    #+#             */
/*   Updated: 2023/01/25 16:09:30 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 
int	main(int gc, char **gv)
{
	int			i;
	t_mystack	mystacks;

	i = 1;
	mystacks.asize = gc - 1;
	mystacks.a = calloc((mystacks.asize) ,sizeof(int));
	mystacks.b = NULL;
	mystacks.bsize = 0;
	while (i < gc)
	{
		mystacks.a[i - 1] = ft_atoi(gv[i]);
		i++;
	}
	
	i = 0;
	while (i < (gc - 1))
	{
		if(mystacks.a[i] & 1)
			rra(mystacks);
		else
		{
			pb(mystacks);
			mystacks.bsize++;
		}
		i++;
	}
	i = mystacks.bsize;
	while(i > 0)
	{
		pa(mystacks);
		i--;
	}
	
	// i = 0; //a stack yazdırmak için kullandım
	// while (i < (gc - 1))
	// {
	// 	printf("%d ",mystacks.a[i]);
	// 	i++;
	// }
	return (0);
}

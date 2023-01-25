/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:08:36 by maygen            #+#    #+#             */
/*   Updated: 2023/01/25 14:34:15 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "push_swap.h"
#include "stdio.h"
 #include <stdlib.h>
 
int	main(int gc, char **gv)
{
	int			i;
	t_mystack	mystacks;

	i = 1;
	mystacks.asize = gc - 1;
	mystacks.a = calloc((mystacks.asize) ,sizeof(int));
	while (i < gc)
	{
		mystacks.a[i - 1] = ft_atoi(gv[i]);
		i++;
	}
//9(1001)  - 12(1100)- 8(1000) -  13(1101)	-  1(0001) -	15(1111)-  2(0010)	-  14(1110) - 10(1010)

// 12(1100)-8(1000) -  2(0010) -  14(1110) - 10(1010)- 9(1001) -  13(1101) -  1(0001) -	15(1111)
	// i = 0; //a stack i yazdırmak için kullandım
	// while (i < (gc - 1))
	// {
	// 	printf("%d ",mystacks.a[i]);
	// 	i++;
	// }
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:15:38 by maygen            #+#    #+#             */
/*   Updated: 2022/07/30 11:16:45 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < size)
	{
		a = i + 1;
		while (a < size)
		{
			if (tab[i] > tab[a])
				ft_swap(&tab[i], &tab[a]);
			a++;
		}
		i++;
	}
}
/*int	main()
{
	int c[4] = {5,8,2,4};

	ft_sort_int_tab(c, 4);
	printf("%d, %d, %d, %d", c[0], c[1], c[2], c[3]);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:15:11 by maygen            #+#    #+#             */
/*   Updated: 2022/07/28 12:15:21 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = a;
		i++;
	}
}
/*int main()
{
	int tab[5] = {1,2,3,4,5};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3], tab[4]);

	return 0;
}*/

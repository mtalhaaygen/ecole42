/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:16:05 by maygen            #+#    #+#             */
/*   Updated: 2022/07/24 12:22:10 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	basamakbul(int x)
{	
	char	a;
	char	b;
	char	c;
	char	d;

	a = ('0' + (x / 1000));
	b = (48 + (x / 100) % 10);
	c = (48 + (x / 10) % 10);
	d = (48 + (x % 10));
	if (((a * 10) + b) < ((c * 10) + d))
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, " ", 1);
		write (1, &c, 1);
		write (1, &d, 1);
		if (x < 9800)
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;

	a = 0;
	while (a < 9999)
	{
		basamakbul(a);
		a++;
	}
}
/*int main()
{
	ft_print_comb2();

	return (0);
}*/

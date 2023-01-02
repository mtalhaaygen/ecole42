/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:58:31 by maygen            #+#    #+#             */
/*   Updated: 2022/07/24 14:31:32 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
			ft_putnbr(nb);
		}
		else if (nb < 10)
		{
			ft_putchar(nb + 48);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
/*int main()
{
	ft_putnbr(42);
	ft_putnbr(-2147483648);
	ft_putnbr(-23456);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:22:39 by maygen            #+#    #+#             */
/*   Updated: 2022/08/02 01:25:05 by maygen           ###   ########.fr       */
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
		}
		else if (nb < 0)
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

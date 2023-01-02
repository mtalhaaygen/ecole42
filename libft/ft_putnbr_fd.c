/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:00:08 by maygen            #+#    #+#             */
/*   Updated: 2022/10/21 11:00:37 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
		}
		else if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb *= -1;
			ft_putnbr_fd(nb, fd);
		}
		else if (nb < 10)
		{
			ft_putchar_fd((nb + 48), fd);
		}
		else
		{
			ft_putnbr_fd((nb / 10), fd);
			ft_putnbr_fd((nb % 10), fd);
		}
	}
}

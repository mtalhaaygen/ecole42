/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:33:51 by maygen            #+#    #+#             */
/*   Updated: 2023/04/06 12:33:54 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_digit(long int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		digit = 1;
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int			digit;
	int			i;
	char		*rt;
	long int	nb;

	nb = (long int)n;
	i = 0;
	digit = ft_digit(nb);
	rt = (char *)malloc(sizeof(char) * (digit + 1));
	if (!rt)
		return (0);
	rt[digit] = 0;
	if (nb < 0)
	{
		rt[i++] = '-';
		nb = -nb;
	}
	while (i <= --digit)
	{
		rt[digit] = nb % 10 + 48;
		nb /= 10;
	}
	return (rt);
}

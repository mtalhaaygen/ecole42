/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:02:19 by maygen            #+#    #+#             */
/*   Updated: 2022/10/21 12:03:38 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = (n * -1);
		count++;
	}
	if (n == -0)
	{
		n = 0;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*kitoa(int n)
{
	char	*c;
	int		count;
	int		kap;

	kap = n;
	count = counter(n);
	c = malloc(sizeof(char) * (count + 1));
	if (!c)
		return (NULL);
	if (n < 0)
		kap = kap * -1;
	if (n == -0)
		kap = 0;
	c[count] = 0;
	while (count != 0)
	{
		c[--count] = (kap % 10) + 48;
		kap = (int)(kap / 10);
		if (n < 0)
			c[0] = '-';
	}
	return (c);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (kitoa(n));
}

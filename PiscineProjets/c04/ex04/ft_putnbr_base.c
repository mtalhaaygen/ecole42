/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 04:38:52 by maygen            #+#    #+#             */
/*   Updated: 2022/08/03 18:42:20 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[i] == '\0' || ft_strlen(str) == 1)
		return (0);
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if ((str[j] == str[i]) || str[i] == '-' || str[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	check;

	i = ft_strlen(base);
	check = checkbase(base);
	if (check == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < i)
			ft_putchar(base[nbr]);
		if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
			ft_putnbr_base(nbr % i, base);
		}
	}
}
/*int main()
{
	//char binary[] = "01";
	char hex[] = "0123456789ABCDEF";
	//char octal[] = "01234567";
	ft_putnbr_base(42,(hex));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 05:05:30 by maygen            #+#    #+#             */
/*   Updated: 2022/08/04 05:43:13 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int gc, char **gv)
{
	int	i;
	int	j;

	j = gc - 1;
	while (j > 0)
	{
		i = 0;
		while (gv[j][i])
		{
			write(1, &gv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}

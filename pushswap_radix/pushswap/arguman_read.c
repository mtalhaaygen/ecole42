/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguman_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:59 by maygen            #+#    #+#             */
/*   Updated: 2023/03/20 00:40:45 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*merget(int gc, char **gv)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *)malloc(2 * sizeof(*str));
	while (i < gc)
	{
		str = ft_strjoin(str, gv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguman_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:13:59 by maygen            #+#    #+#             */
/*   Updated: 2023/03/20 17:58:19 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*merget(int gc, char **gv)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *)ft_calloc(2, sizeof(*str));
	while (i < gc)
	{
		str = ft_strjoin(str, gv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}

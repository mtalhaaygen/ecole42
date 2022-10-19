/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:01:24 by maygen            #+#    #+#             */
/*   Updated: 2022/10/19 03:28:03 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst && !size)
		return (0);
	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	ft_strlcpy((dst + i), src, size - i);
	return (i + ft_strlen(src));
}
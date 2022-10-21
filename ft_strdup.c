/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:10:54 by maygen            #+#    #+#             */
/*   Updated: 2022/10/21 11:52:57 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}

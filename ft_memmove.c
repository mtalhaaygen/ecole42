
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulacak <ybulacak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 07:37:50 by ybulacak          #+#    #+#             */
/*   Updated: 2022/07/07 14:57:39 by ybulacak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t	len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (src1 < dst1)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}
// int main()
// {
// 	char s1[]= "yusuf";
// 	char s2[]= "kerim";
// 	printf("%s",ft_memmove(s2+1,s2,4));
// }

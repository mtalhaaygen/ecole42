/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 01:49:58 by maygen            #+#    #+#             */
/*   Updated: 2022/07/31 03:47:50 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i] <= 'z' && str[i] >= 'a'))
		{
			if (!(str[i - 1] <= '9' && str[i - 1] >= '0')
				&& !(str[i - 1] <= 'Z' && str[i - 1] >= 'A')
				&& !(str[i - 1] <= 'z' && str[i - 1] >= 'a'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*int	main()
{
	char c[] = "	salut, comment tu vas ? 42mots quaRHGJnte-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(c));
	return 0;
}*/

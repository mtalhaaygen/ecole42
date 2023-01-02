/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:36:48 by maygen            #+#    #+#             */
/*   Updated: 2022/11/15 02:06:07 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strjoin(char *str, char *buff)
{
	size_t	c;
	size_t	i;
	char	*pstr;

	if (!str)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
	}
	if (!str || !buff)
		return (NULL);
	pstr = malloc(sizeof(char) * ((ft_strlen(str)) + ft_strlen(buff) + 1));
	if (pstr == NULL)
		return (NULL);
	c = -1;
	i = 0;
	if (str)
		while (str[++c] != '\0')
			pstr[c] = str[c];
	while (buff[i] != '\0')
		pstr[c++] = buff[i++];
	pstr[ft_strlen(str) + ft_strlen(buff)] = '\0';
	free(str);
	return (pstr);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*liner(char *str)
{
	int		i;
	char	*my_line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	my_line = (char *)malloc(sizeof(char) * (i + 2));
	if (!my_line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		my_line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		my_line[i++] = '\n';
	my_line[i] = '\0';
	return (my_line);
}

char	*next(char *str)
{
	int		c;
	int		i;
	char	*my_line;

	c = 0;
	while (str[c] && str[c] != '\n')
		c++;
	if (!str[c])
	{
		free(str);
		return (NULL);
	}	
	my_line = (char *)malloc(sizeof(char) * (ft_strlen(str) - c + 1));
	if (!my_line)
		return (NULL);
	c++;
	i = 0;
	while (str[c])
		my_line[i++] = str[c++];
	my_line[i] = '\0';
	free(str);
	return (my_line);
}

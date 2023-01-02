/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:01:47 by maygen            #+#    #+#             */
/*   Updated: 2022/12/30 16:59:56 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - 48;
		i++;
	}
	return (neg * num);
}

int	main(int ac, char **av)
{
	pid_t	serverpid;
	int		j;
	int		i;

	if (ac == 3)
	{
		i = 0;
		serverpid = ft_atoi(av[1]);
		while (av[2][i])
		{
			j = 0;
			while (j < 8)
			{
				if ((av[2][i] >> j) & 1)
					kill(serverpid, SIGUSR1);
				else
					kill(serverpid, SIGUSR2);
				usleep(100);
				j++;
			}
			i++;
		}
	}
}

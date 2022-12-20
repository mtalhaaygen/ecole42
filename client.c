/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:01:47 by maygen            #+#    #+#             */
/*   Updated: 2022/12/20 18:04:31 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // usleep getpid
#include <signal.h>
#include <stdlib.h> // atoi için

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] <= 9 && str[i] >= 13) || str[i] == 32)
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

int main(int ac, char **av) // ./a.out 41133 "talha aygen"
{
    if (ac == 3)
    {
        int i;
        int j;
        pid_t serverpid;

        i = 0;
        serverpid = ft_atoi(av[1]);
        while (av[2][i])
        {
            j = 0;
            while (j < 8)
            {
                if((av[2][i] >> j) & 1)
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

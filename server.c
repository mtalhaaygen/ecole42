/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:01:53 by maygen            #+#    #+#             */
/*   Updated: 2022/12/20 18:20:02 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // usleep getpid
#include <signal.h>

void ft_putnbr(int nb)
{
    if (nb < 10)
	{
        nb += 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

static void myhandler(int signum)
{
    char new;
    static int i;
    char gelenk;
    gelenk = 0;
    if (signum == 30)
    {
        gelenk |= (1 << i);
        new += gelenk;
    }
    if (i == 7)
    {
        write(1, &new, 1);
        i = 0;
        new = 0;
        return ;
    }
    i++;
}

int main()
{
    pid_t pid = getpid();
    struct sigaction sa;
    
    sa.sa_handler = myhandler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &sa, NULL) == -1)
        write(1, "hatalı dönüş değeri", 25);

    signal(SIGUSR2, myhandler);

    write(1,"pid : ", 7);
    ft_putnbr(pid);
    write(1, "\n", 1);
    while (1);
    return (0);
}
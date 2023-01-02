/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:00:50 by maygen            #+#    #+#             */
/*   Updated: 2022/07/24 14:53:04 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
}
/*int main()
{
	ft_print_reverse_alphabet();
}*/

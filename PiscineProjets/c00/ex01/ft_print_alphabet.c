/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:59:55 by maygen            #+#    #+#             */
/*   Updated: 2022/07/23 12:12:55 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

/*int main()
{
	ft_print_alphabet();
}*/

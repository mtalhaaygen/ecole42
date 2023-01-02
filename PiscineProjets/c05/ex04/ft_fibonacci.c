/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:17:25 by maygen            #+#    #+#             */
/*   Updated: 2022/08/07 21:26:36 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*int main()
{
	printf("%i",ft_fibonacci(4));
	return (0);
}*/

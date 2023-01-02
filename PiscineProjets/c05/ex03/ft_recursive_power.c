/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:00:09 by maygen            #+#    #+#             */
/*   Updated: 2022/08/06 11:06:21 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
}
/*int main()
{
	printf("%d",ft_recursive_power(5,3));
}*/

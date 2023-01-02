/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:00:19 by maygen            #+#    #+#             */
/*   Updated: 2022/08/06 02:10:40 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (fac);
}
/*int main()
{
	int a = ft_iterative_factorial(5);
	printf("%d",a);

	return (0);
}*/

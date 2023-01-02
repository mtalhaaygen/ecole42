/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:04:37 by maygen            #+#    #+#             */
/*   Updated: 2022/07/27 13:13:49 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*int main()
{
	int a = 10;
	int b = 0;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a,b,div,mod);
}*/

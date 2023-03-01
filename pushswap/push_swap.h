/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:40:32 by maygen            #+#    #+#             */
/*   Updated: 2023/02/28 17:58:03 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "stdio.h"
#include "../libft/libft.h"
#include <stdlib.h>

typedef struct mystacks {
	int	*a;
	int	*b;
	size_t	asize;
	size_t	bsize;
}	t_mystack;

void	push_a(t_mystack *mystacks);
void	push_b(t_mystack *mystacks);
void	reverse_a(t_mystack *mystacks);
int		*indexing(t_mystack *arrr);
void 	comb_sort(int *arr,int size, int *x);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:40:32 by maygen            #+#    #+#             */
/*   Updated: 2023/03/01 19:08:01 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "stdio.h"
#include "../libft/libft.h"
#include <stdlib.h>
#include <math.h>

typedef struct mystacks {
	int	*a;
	int	*b;
	size_t	asize;
	size_t	bsize;
}	t_mystack;

void	push_a(t_mystack *mystacks);
void	push_b(t_mystack *mystacks);
void	reverse_a(t_mystack *mystacks);
void 	comb_sort(int *arr,int size, int *x);
int		*indexing(t_mystack *arrr);
void 	mradix(t_mystack *data, int loop);
int		find(int loop);

#endif
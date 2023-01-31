/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:40:32 by maygen            #+#    #+#             */
/*   Updated: 2023/01/30 22:41:35 by maygen           ###   ########.fr       */
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

void	pa(t_mystack *mystacks);
void	pb(t_mystack *mystacks);
void	rra(t_mystack *mystacks);


#endif
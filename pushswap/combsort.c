/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:58:23 by maygen            #+#    #+#             */
/*   Updated: 2023/02/28 17:07:32 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void comb_sort(int *arr,int size, int *x)
{
    int gap;
    int i;
    int tmp;
    gap = size/1.3;
    while(gap >=1 )
    {
        i = 0;
        while(arr[(i + gap)])
        {
            if(arr[i] > arr[i + gap])
            {
                tmp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = tmp;
            }
            i++;
        }
        gap = gap / 1.3;
    }
    i = 0;
    while (arr[i])
    {
        x[i] = arr[i];
        printf("%d\n",arr[i]);
        i++;
    }
}

int		*indexing(t_mystack *arrr)
{
    int *tmp;
    int i;
    int j;
    
    tmp = ft_calloc(arrr->asize, sizeof(int));
    comb_sort(arrr->a, arrr->asize, tmp);
    // tmp - 2 5 7 9 
    // dataa 7 2 9 5
    i = 0;
    while (i < arrr->asize)
    {
        j = 0;
        while (j < arrr->asize)
        {
            if(tmp[i] == arrr->a[j])
                arrr->a[j] = i;
            j++;
        }
        i++;
    }
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:58:23 by maygen            #+#    #+#             */
/*   Updated: 2023/03/04 11:03:20 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void bubbleSort(int *arr, int n)
{
    int i;
    int j;

    i = 0;
    while (i < n -1)
    {
        j = 0;
        while (j < n -1)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
            j++;
        }
        i++;
    }

}

int		*indexing(t_mystack *arrr)
{
    int *tmp;
    int i;
    int j;
    
    tmp = ft_calloc(arrr->asize, sizeof(int));
    i = 0;
    while (i < arrr->asize)
    {
        tmp[i] = arrr->a[i];
        i++;
    }
    bubbleSort(tmp, arrr->asize);
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

int ft_is_one(t_mystack *data, int j)
{
    int i;
    i = 0;
    while(i < data->asize)
    {
        if (((data->a[i] >> j) & 1) == 0)
            return (1);
        i++;
    }
    return (0);
}

int ft_iszero(t_mystack *data, int j)
{
    int i;
    i = 0;
    while(i < data->asize)
    {
        if (((data->a[i] >> j) & 1) == 1)
            return (1);
        i++;
    }
    return (0);
}

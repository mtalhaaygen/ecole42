/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:58:23 by maygen            #+#    #+#             */
/*   Updated: 2023/03/01 19:19:45 by maygen           ###   ########.fr       */
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

void mradix(t_mystack *data, int loop)
{
	int i; // sayının son indexindeki biti 1 ise push_b 0 ise reverse_a çalışacak
	int j;
	int tmpsize;
	int *tmp;
	
    j = 0;
	tmp = ft_calloc(data->asize, sizeof(int));
	while (j < loop) // bu döngü max 32 kez dönecek
	{
		i = 1; 	/*A stackini tmp ye aktarıyoruz*/
		while (i <= (data->asize))
		{
			tmp[i - 1] = data->a[i - 1];
			i++;
		}
		tmpsize = data->asize;
		i = 0;
		while (i < tmpsize)
		{
			if(tmp[i] & (1 << j))
				reverse_a(data);
			else
				push_b(data);
			i++;
		}
		i = 0;
		tmpsize = data->bsize;
		while(i < tmpsize)
		{
			push_a(data);
			i++;
		}
		j++;
	}
}

int find(int loop)
{
    if (loop < 4)
        return 2;
    else if (loop < 8)
        return 3;
    else if (loop <= 16)
        return 4;
    else if (loop < 32)
        return 5;
    else if (loop <= 64)
        return 6;
    else if (loop <= 32768)
        return 16;
        // ...
        // ...
        // ...
    // bunu return 32 ye kadar yapsak okey ama böyle manuel hiç hoş durmadı
    // finde max sayıyı parametre olarak veriyorum ve 
    // bu max sayının en fazla kaç biti dolu olabilir bu fonksiyonla bulacagız 
    //buna göre mradix fonksiyonundaki while ın kaç kere dönceği belirlenmiş olacak
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:08:36 by maygen            #+#    #+#             */
/*   Updated: 2023/01/31 08:27:00 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// indexleme yapılacak, 
// gerekli görülen caseler için farklı bir algoritmaya sok, tester
int	main(int gc, char **gv)
{
	int			i;
	int			j;
	int			*tmp;
	int			flag;
	t_mystack	mystacks;

	i = 1;
	mystacks.asize = gc - 1;
	mystacks.a = ft_calloc((mystacks.asize) ,sizeof(int));
	mystacks.b = ft_calloc((mystacks.asize) ,sizeof(int));
	tmp = ft_calloc((mystacks.asize) ,sizeof(int));
	mystacks.bsize = 0;
	while (i < gc)
	{
		// burada girilen değerlerle a stack i dolduruyorum
		mystacks.a[i - 1] = ft_atoi(gv[i]);
		i++;
	}
	
	j = 0;
	while (j < 32) // (1 << 31) ifadesi son basabağı kontrol eder 1000 0000 0000 0000 0000 0000 0000 0000
	{
		// ******************************************************************
		// ilk kontrol edilecek basamağın sıralı olup olmadığına bakıyoruz
		i = mystacks.asize - 1; 
		flag = mystacks.a[0] & (1 << j);
		while (i >= 0)
		{
			if((mystacks.a[i] & (1 << j)) == flag)
				i--;
			else
			{
				flag = -1;
				break;
			}
		}
		if (flag != -1)
		{
			j++;
			continue;
		}
		// ******************************************************************
		
		// ******************************************************************
		// a daki sıralama en son değişmeli bu sebeple a nın birebir aynısı tmp üzerinden bitleri dolaşağız, her turda tmp güncellenmeli
		// radixde b için tmp gibi bir tutucuya ihtiyaç yok çünkü rrb gibi bir işlem yapılmıyor
		i = 1;
		while (i < gc)
		{
			tmp[i - 1] = mystacks.a[i - 1];
			i++;
		}
		// ******************************************************************
		//RADİX**************************************************************
		i = mystacks.asize - 1; // a stack inde en üstteki sayıdan başlıyoruz kontrol etmeye
		//kontrol edilen bit 0 ise b ye pushluyoruz, kontrol ettiğimiz bit 1 ise rra ile a nın sonuna ekliyoruz
		while (i >= 0)
		{
			if(tmp[i] & (1 << j))
				rra(&mystacks);
			else
				pb(&mystacks);
			i--;
		}
		// B ye pushlananların hepsi tekrar a ya pushlandığında A daki sayılar basamağa göre sıralanmış oluyor, tüm basamaklar için yapıldıgında sayılar tam olarak sıralanmış oluyor  
		i = mystacks.bsize - 1;
		while(i >= 0)
		{
			pa(&mystacks);
			i--;
		}
		//RADİX**************************************************************
		j++;
	}
	printf("\n");
	i = 0; //a stack yazdırmak için kullandım
	while (i < (gc - 1))
	{
		printf("%d ",mystacks.a[i]);
		i++;
	}
	return (0);
}

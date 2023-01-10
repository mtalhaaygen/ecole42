/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:08:36 by maygen            #+#    #+#             */
/*   Updated: 2023/01/10 19:19:26 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "push_swap.h"
#include "stdio.h"
 #include <stdlib.h>
 
int	main(int gc, char **gv)
{
	int			i;
	int			j;
	int			gapvalue;
	t_mystack	mystacks;

	i = 1;
	mystacks.asize = gc - 1;
	mystacks.a = calloc((mystacks.asize) ,sizeof(int));
	while (i < gc)
	{
		mystacks.a[i - 1] = atoi(gv[i]); // ft_atoi ile değiştirilecek
		i++;
	}
	gapvalue = (gc - 1) / 1.3;
	// COMB SORT YAZIP Tüm sayıların a stack inde sıralı olmasını saglayacagım
	// ornegin pb komutu gerekliyse bu komut kullanılarak hem sayıyı b ye pushlanacak hemde istendiği gibi ekrana pb basılacak
	// daha sonra sadece ekrana basma işlemi gerçekleşecek şekilde düzenlenebilir.
	// comb sort  https://www.youtube.com/watch?v=n51GFZHXlYY
	// 10 tane veri girildiğinde gapvalue=7 oluyor 0 ile 7. sayılar karşılaştırılıyor ve sıralanıyor daha sonra 1.-8. sayılar daha sonra 2.-9. sayılar
	// listenin sonuna geldiğinden gapvalue değişiyor, gapvalue=5 oluyor bu sefer 0.-5. 1.-6. 2.-7. 3.-8. 4.-9. 
	// listenin sonuna geldiğinden gapvalue değişiyor, gapvalue=3 oluyor bu sefer 0.-3. 1.-4. 2.-5. 3.-6. 4.-7. 5.-8. 6.-9.
	// listenin sonuna geldiğinden gapvalue değişiyor, gapvalue=2 oluyor ....
	// listenin sonuna geldiğinden gapvalue değişiyor, gapvalue=1 oluyor ....
	// gapvalue herdeğiştiğinde sıralama gerçekleşti mi kontrol edilebilir, gapvalue=1 deki işlemler tamamlandığında hertürlü sıralanmış oluyor
	// while (gapvalue > 0)
	// {
	// 	j = gapvalue
	// 	while (j < mystacks.asize)
	// 	{
	// 		j++;
	// 	}
		
	// 	gapvalue = gapvalue / 1.3;
	// }
	
	
	// i = 0; //a stack i yazdırmak için kullandım
	// while (i < (gc - 1))
	// {
	// 	printf("%d ",mystacks.a[i]);
	// 	i++;
	// }
	return (0);
}

#include "push_swap.h"
#include <stdlib.h>

void	rra(t_mystack *mystacks) // en üstteki (a[asize]) değeri en başa(a[0]) ekler . her bir elemanı bir yukarı kaydırır.
{
    int i;
    int tmp;

    i = mystacks->asize - 1;
    tmp = mystacks->a[0];
    mystacks->a[0] = mystacks->a[i];
    while (i > 1)
    {
        mystacks->a[i] = mystacks->a[i - 1];
        i--;
    }
    mystacks->a[i] = tmp;
    printf("rra ");
}

void	pb(t_mystack *mystacks)// bsize bir arttırılır, asize 1 eksiltilir anın en üstündeki elemanı b nin üstüne ekler.
{
    mystacks->bsize++;
    mystacks->b[mystacks->bsize - 1] = mystacks->a[mystacks->asize - 1];
    ft_bzero(mystacks->a + (mystacks->asize - 1), 4);
    // mystacks->a[mystacks->asize - 1] = 0;
    mystacks->asize--;
    printf("pb ");
}
void	pa(t_mystack *mystacks)
{
	mystacks->asize++;
    mystacks->a[mystacks->asize - 1] = mystacks->b[mystacks->bsize - 1];
    mystacks->b[mystacks->bsize - 1] = 0;
	mystacks->bsize--;
    printf("pa ");
}

// int	main(int gc, char **gv)
// {
// 	int			i;
// 	t_mystack	mystacks;

// 	i = 1;
// 	mystacks.asize = gc - 1;
// 	mystacks.a = calloc((mystacks.asize) ,(sizeof(int)));
// 	mystacks.b = calloc((mystacks.asize) ,sizeof(int));
// 	mystacks.bsize = 0;
// 	while (i < gc)
// 	{
// 		// burada girilen değerlerle a stack i dolduruyorum
// 		mystacks.a[i - 1] = atoi(gv[i]);
// 		i++;
// 	}
//     rra(&mystacks);
//     pb(&mystacks);
//     rra(&mystacks);
//     pa(&mystacks);
//     printf("\n");
//     i = 0; //a stack yazdırmak için kullandım
// 	while (i < (gc - 1))
// 	{
// 		printf("%d ",mystacks.a[i]);
// 		i++;
// 	}
//     printf("\n");
//     i = 0; //a stack yazdırmak için kullandım
// 	while (i < (gc - 1))
// 	{
// 		printf("%d ",mystacks.b[i]);
// 		i++;
// 	}
// }
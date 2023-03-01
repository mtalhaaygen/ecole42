#include "push_swap.h"

void	push_a(t_mystack *mystacks)
{
    int i;

    mystacks->asize++;
    i = mystacks->asize - 1;
	while (i > 0)
	{
		mystacks->a[i] = mystacks->a[i - 1];
		i--;
	}

    mystacks->a[0] = mystacks->b[0];
    mystacks->bsize--; 

    i = 0;
	while (i < mystacks->bsize)
	{
		mystacks->b[i] = mystacks->b[i + 1];
		i++;
	}
    printf("pa ");
}

void	push_b(t_mystack *mystacks)
{
    if (mystacks->asize > 0)
    {
        int i;

        mystacks->bsize++;
        i = mystacks->bsize - 1;
        while (i > 0)
        {
            mystacks->b[i] = mystacks->b[i - 1];
            i--;
        }
        mystacks->b[0] = mystacks->a[0];
        mystacks->asize--;
        i = 0;
        while (i < mystacks->asize)
        {
            mystacks->a[i] = mystacks->a[i + 1];
            i++;
        }
        printf("pb ");
    }
}

void	reverse_a(t_mystack *mystacks)
{
    int i;
    int tmp;

    i = 0;
    tmp = mystacks->a[0];
    while (i < (mystacks->asize - 1))
    {
        mystacks->a[i] = mystacks->a[i + 1];
        i++;
    }
    mystacks->a[i] = tmp;
    printf("ra ");
}

// int main(int gc, char **gv)
// {
//     int			i;
//     t_mystack   mystacks;

// 	i = 1;
// 	mystacks.asize = gc - 1;
// 	mystacks.a = calloc((mystacks.asize) ,sizeof(int));
// 	mystacks.b = calloc((mystacks.asize) ,sizeof(int));
// 	mystacks.bsize = 0;
// 	while (i < gc)
// 	{
// 		// burada girilen değerlerle a stack i dolduruyorum
// 		mystacks.a[i - 1] = atoi(gv[i]);
// 		i++;
// 	}

//     // reverse_a(&mystacks);
//     push_b(&mystacks);
//     push_b(&mystacks);
//     push_b(&mystacks);
//     push_a(&mystacks);
//     push_a(&mystacks);
    
//     printf("\n");
// 	i = 0;
// 	while (i < (mystacks.asize))
// 	{
// 		printf("%d ",mystacks.a[i]);
// 		i++;
// 	}
//     printf("\n");
// 	i = 0;
// 	while (i < (mystacks.bsize))
// 	{
// 		printf("%d ",mystacks.b[i]);
// 		i++;
// 	}
// }
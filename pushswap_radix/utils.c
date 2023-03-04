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
    printf("pa\n");
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
        printf("pb\n");
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
    printf("ra\n");
}

void mradix(t_mystack *data)
{
	int i;
	int j;
	int tmpsize;
	int *tmp;
	
    j = 0;
	tmp = ft_calloc(data->asize, sizeof(int));
	while (j < 32)
	{
        if (!(ft_iszero(data, j) && ft_is_one(data, j)))
        {
            j++;
            continue;
        }
		i = 1;
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
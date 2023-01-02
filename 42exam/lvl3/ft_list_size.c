// ******************YANLIS
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list->next != 0) // elimizdeki elemanın next i 0 ise o eleman son elemandır.
	{
		// begin_list ilk elemanın adresi
		// begin_list->next  ikinci elemanın adresi
		begin_list = begin_list->next;
		i++;
	}
	i++; // son eleman için
	return (i);
}

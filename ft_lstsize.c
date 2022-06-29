#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t			i;
	struct	s_list	*list;

	i = 1;
	if (!lst)
		return (NULL);
	list = lst;
	while (list->next != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
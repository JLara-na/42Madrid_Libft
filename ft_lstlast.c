#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	struct s_list	*list;

	if (!lst)
		return (NULL);
	list = lst;
	while (list->next != NULL)
		list = list->next;
	return (list);
}
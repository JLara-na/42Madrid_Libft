#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list	*list; 

	if (!lst || !del)
		return ;
	list = lst;
	while (list)
	{
		del(list->content);
		free(list);
		list = list->next;
	}
	*lst = NULL;
}
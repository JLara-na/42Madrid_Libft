#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list	*list;

	if (!lst)
		return (NULL);
	if (*lst == NULL)
		*lst = new;
	else
	{
		list = ft_lstlast(*lst);
		list->next = new;
	}
}
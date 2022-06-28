#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct	s_list	*list;
	
	list = malloc(sizeof(content));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return(list);
}
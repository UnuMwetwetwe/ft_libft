
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	if (tmp->next)
	{
		ft_lstclear(&tmp->next, del);
	}
	ft_lstdelone(&tmp, del);
	*lst = NULL;
}

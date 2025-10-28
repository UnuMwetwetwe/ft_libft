
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstcpy;
	t_list	*bby_lst;
	t_list	*tmp;

	if (!lst)
		return ;
	lstcpy = ft_lstnew(((t_list *)f(lst))->content);
	if (!lstcpy)
		return NULL;
	tmp = lst;
	while (tmp)
	{
		bby_lst = ft_lstnew(tmp->content);
		if (bby_lst)
		{
			f(bby_lst);
			ft_lstadd_back(*lstcpy, bby_lst);
			tmp = lst->next;
		}
		else
			del(bby_lst);
	}
	return (lstcpy);
}

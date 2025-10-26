/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:31:21 by aldecour          #+#    #+#             */
/*   Updated: 2025/10/26 19:48:00 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	int	i;

	i = 0;
	while (lst[i])
	{
		if (lst[i]->next == NULL)
			break ;
		i++;
	}
	lst[i]->next = new;
}
/*
int	main(void)
{
	t_list *lst = 
}*/

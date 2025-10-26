/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:52:31 by aldecour          #+#    #+#             */
/*   Updated: 2025/10/24 21:25:01 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*scpy;

	i = 0;
	scpy = ft_strdup(s);
	if (!scpy)
		return (NULL);
	while (scpy[i])
	{
		scpy[i] = f(i, s[i]);
		i++;
	}
	return (scpy);
}

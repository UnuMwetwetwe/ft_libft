/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:09:40 by aldecour          #+#    #+#             */
/*   Updated: 2025/10/21 20:21:10 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	n;

	n = ft_strlen(dest);
	if (n > size)
		n = size;
	n += ft_strlcpy(dest + n, src, size - n);
	return (n);
}

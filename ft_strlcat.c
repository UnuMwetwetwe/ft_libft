/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:09:40 by aldecour          #+#    #+#             */
/*   Updated: 2025/11/02 20:20:14 by aldecour         ###   ########.fr       */
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
/*
#include <stdio.h>
#include "bsd/string.h"
int	main(void)
{
	char *src = "venator";
	char dest[25] = "conca";
	char *src1 = "venator";
	char dest1[25] = "conca";

	strlcat(dest1, src1, 30);
	printf("%s\n", dest);

	ft_strlcat(dest, src, 25);	
	printf("%s\n", dest1);
}*/

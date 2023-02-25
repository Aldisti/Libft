/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:36:28 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/20 12:16:50 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	if (!d && !s)
		return (0);
	i = 0;
	src = (unsigned char *) s;
	dst = (unsigned char *) d;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (d);
}

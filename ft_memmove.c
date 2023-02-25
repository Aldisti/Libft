/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:41:05 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/17 15:10:29 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t len)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *) d;
	src = (unsigned char *) s;
	if (d == s)
		return (d);
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			dst[len] = src[len];
	}
	return ((void *) dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:53:45 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/17 12:46:17 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	i = 0;
	len = ft_strlen(dst);
	while (len + i + 1 < dstsize && src[i])
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = 0;
	return (len + ft_strlen(src));
}

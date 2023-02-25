/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:15:49 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/22 12:47:30 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	j;

	if (!*needle)
		return ((char *)str);
	if (!len || !*str)
		return (0);
	while (*str && len > 0)
	{
		if (*str == *needle)
		{
			j = 0;
			while (needle[j] && needle[j] == str[j] && j < len)
				j++;
			if (j == ft_strlen(needle))
				return ((char *)str);
		}
		str++;
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 16));

	return (0);
}
*/

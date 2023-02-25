/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:42:27 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/20 11:35:22 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s || !f)
		return (0);
	ptr = ft_calloc(ft_strlen(s) + 1, sizeof (char));
	if (!ptr)
		return (0);
	i = -1;
	while (s[++i])
		ptr[i] = (*f)(i, (char)s[i]);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:34:02 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/22 12:56:44 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t dim)
{
	char	*ptr;
	size_t	i;

	if (num >= 1247483424)
		return (0);
	ptr = (char *) malloc (num * dim);
	if (!ptr)
		return (0);
	i = 0;
	while (i < (num * dim))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	void	*ptr;

	ptr = ft_calloc(2147483424, 1);
	free(ptr);
	return (0);
}
*/

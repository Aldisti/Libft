/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:03:28 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/23 10:31:15 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strnbr(char const *str, char chr)
{
	int		c;

	while (*str && *str == chr)
		str++;
	c = 0;
	while (*str)
	{
		if (*str == chr)
		{
			while (*str == chr && *str)
				str++;
			c++;
		}
		else
			str++;
	}
	if (*(--str) == chr && c)
		c--;
	return (c);
}

char	**ft_fill(char const *s, char c)
{
	char	**ptr;
	int		j;
	int		k;

	ptr = (char **) ft_calloc((ft_strnbr(s, c) + 2), sizeof (char *));
	if (!ptr)
		return (0);
	k = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				s++;
			ptr[k++] = ft_substr(s - j, 0, j);
		}
		else
			s++;
	}
	ptr[k] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s || !c)
		if (!s)
			return (0);
	if (!(*s))
	{
		ptr = (char **) malloc (2 * sizeof (char *));
		ptr[0] = 0;
		ptr[1] = 0;
	}
	else
		ptr = ft_fill(s, c);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**ptr;
	int		i;

	//ptr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing", 32);
	ptr = ft_split("", 'z');
	printf("%d\n", ft_strnbr("", 'z'));
	//ptr = ft_split("tripouille", 0);
	printf("|%s|", ptr[0]);
	exit(0);
	i = -1;
	while (++i < 3)
	{
		printf("|%s|\n", ptr[i]);
		free(ptr[i]);
	}
	free(ptr);
}
*/

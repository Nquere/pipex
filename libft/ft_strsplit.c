/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:01 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:49:13 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_analyzer(const char *s, char c)
{
	unsigned int	res;

	res = 1;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		res++;
	}
	return (res);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**res;
	int		size;
	int		it;

	it = 0;
	size = ft_analyzer(s, c);
	res = (char**)malloc(sizeof(char*) * size);
	if (!res || !s)
		return (NULL);
	while (it < size)
	{
		while (*s && *s == c)
			s++;
		res[it] = ft_strsub(s, 0, ft_strclen(s, c));
		if (!res[it])
			return (NULL);
		while (*s && *s != c)
			s++;
		it++;
	}
	res[it] = '\0';
	return (res);
}

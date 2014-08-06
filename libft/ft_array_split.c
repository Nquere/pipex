/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:55 by nquere            #+#    #+#             */
/*   Updated: 2014/05/07 00:03:55 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_array		*ft_array_split(const char *s, char c)
{
	t_array		*res;
	char		*temp;

	res = array_new(100, 10, sizeof(char *), PTR);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			return (res);
		temp = ft_strndup(s, ft_strclen(s, c));
		if (!temp)
		{
			array_free(&res);
			return (NULL);
		}
		array_add(res, temp);
		s += ft_strclen(s, c);
	}
	return (res);
}

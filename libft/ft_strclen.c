/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:58 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:46:55 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return the length of the nul or c terminated string
*/

size_t	ft_strclen(const char *s, char c)
{
	size_t	res;

	res = 0;
	if (!s || !*s)
		return (res);
	while (*s && *s != c)
	{
		res++;
		s++;
	}
	return (res);
}

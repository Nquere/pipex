/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:00 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:48:50 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Return a new string composed of the concanation of s1 and s2, not more than
** n character will copied from s2.
*/

char	*ft_strnjoin(const char *s1, const char *s2, size_t n)
{
	char	*res;

	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strncat(res, s2, n);
	return (res);
}

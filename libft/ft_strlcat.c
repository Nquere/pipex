/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:59 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:48:03 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	a;
	size_t	c;
	size_t	j;

	i = 0;
	a = 0;
	c = 0;
	j = 0;
	while (dst[i] != '\0')
		i = i + 1;
	while (src[a] != '\0')
		a = a + 1;
	c = a + i;
	if (size <= i)
		return (size + a);
	while (i < size)
	{
		dst[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dst[i - 1] = '\0';
	return (c);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:56 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:45:17 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[a] == (unsigned char)c)
			return (&((unsigned char*)s)[a]);
		a = a + 1;
		i = i + 1;
	}
	return (NULL);
}

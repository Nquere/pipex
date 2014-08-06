/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:56 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:45:28 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char*)s1)[a] = ((unsigned char*)s2)[a];
		a = a + 1;
		i = i + 1;
	}
	return (s1);
}

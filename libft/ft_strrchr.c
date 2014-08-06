/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:00 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:49:09 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i = i + 1;
	while (i > 0)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((char*)s + i);
		i = i - 1;
	}
	if (((unsigned char*)s)[i] == (unsigned char)c)
		return ((char*)s + i);
	return (NULL);
}

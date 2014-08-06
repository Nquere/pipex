/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:57 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:45:47 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*s3;
	unsigned int	i;

	i = 0;
	s3 = ft_strdup(s2);
	if (!s3)
		return (NULL);
	while (s1 && i < n)
	{
		((unsigned char*)s1)[i] = s3[i];
		i++;
	}
	free(s3);
	return (s1);
}

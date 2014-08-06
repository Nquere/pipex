/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalula <jalula@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 11:20:51 by jalula            #+#    #+#             */
/*   Updated: 2014/04/15 11:53:31 by jalula           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		y;
	int		o;

	i = 0;
	y = 0;
	o = 0;
	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*s3));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[o] = s1[i];
		i++;
		o++;
	}
	while (s2[y] != '\0')
	{
		s3[o] = s2[y];
		y++;
		o++;
	}
	s3[o] = '\0';
	return (s3);
}

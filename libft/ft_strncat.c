/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:00 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:48:21 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	size_t	k;

	if (s1 == NULL || s2 == NULL)
		return (s1);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i = i + 1;
	while (k < n && s2[j] != '\0')
	{
		s1[i] = s2[j];
		i = i + 1;
		j = j + 1;
		k = k + 1;
	}
	s1[i] = '\0';
	return (s1);
}

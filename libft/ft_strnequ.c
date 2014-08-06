/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:00 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:48:41 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && a < n)
	{
		if (s1[a] != s2[a])
			return (0);
		a = a + 1;
	}
	if (s1[a] == s2[a] || a == n)
		return (1);
	return (0);
}

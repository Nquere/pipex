/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:01 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:52:13 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		define_a(int *a, int *b, int *c)
{
	if (*c > 0)
	{
		*a = *c;
		*c = 0;
	}
	else
		*a = *a + 1;
	*b = 0;
}

char			*ft_strstr(const char *s1, const char *s2)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	if (s2[0] == '\0')
		return ((void*)(char*)s1);
	while (s1[a] != '\0')
	{
		if (s1[a] == s2[b])
		{
			c = a + 1;
			while (s1[a] == s2[b])
			{
				a = a + 1;
				b = b + 1;
				if (s2[b] == '\0')
					return ((void*)(char*)&s1[c - 1]);
			}
		}
		define_a(&a, &b, &c);
	}
	return (NULL);
}

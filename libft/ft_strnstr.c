/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:00 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:54:44 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void		define_a(unsigned int *b, unsigned int *c, unsigned int *a)
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

static void		make_null(unsigned int *a, unsigned int *b, unsigned int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int		a;
	unsigned int		b;
	unsigned int		c;

	make_null(&a, &b, &c);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s2[0] == '\0')
		return ((void*)(char*)s1);
	while (s1[a] != '\0' && a <= n)
	{
		if (s1[a] == s2[b])
		{
			c = a + 1;
			while (s1[a] == s2[b] && a <= n)
			{
				a = a + 1;
				b = b + 1;
				if (s2[b] == '\0')
					return ((void*)(char*)&s1[c - 1]);
			}
		}
		define_a(&b, &c, &a);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:04:01 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:53:42 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int		ft_howmanycaract(char const *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] != ' ' && s[j] != '\n' && s[j] != '\t')
			i = i + 1;
		j = j + 1;
	}
	return (i);
}

static int		ft_firstspace(char const *s)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
		i = i + 1;
	if (s[0] == ' ' || s[0] == '\n' || s[0] == '\t')
	{
		while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j < i)
		{
			k = k + 1;
			j = j + 1;
		}
	}
	return (k);
}

static int		ft_lastspace(char const *s)
{
	int		i;
	int		j;
	int		k;
	int		kbis;

	i = 0;
	j = 0;
	k = 0;
	kbis = 0;
	while (s[i] != '\0')
		i = i + 1;
	i = i - 1;
	j = i;
	if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j >= 0)
		{
			kbis = kbis + 1;
			j = j - 1;
		}
	}
	k = i + 1 - kbis;
	return (k);
}

char			*ft_strtrim(char const *s)
{
	char	*tmp;
	int		i;
	int		j;
	int		fs;
	int		ls;

	j = 0;
	if (s == NULL)
		return (NULL);
	i = ft_howmanycaract(s);
	tmp = (char*)malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (NULL);
	fs = ft_firstspace(s);
	ls = ft_lastspace(s);
	i = fs;
	j = 0;
	while (i < ls)
	{
		tmp[j] = s[i];
		j = j + 1;
		i = i + 1;
	}
	tmp[j] = '\0';
	return (tmp);
}

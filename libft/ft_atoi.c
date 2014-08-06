/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:55 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 16:10:50 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_howmanyspace(const char *str)
{
	int		i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i = i + 1;
	}
	return (i);
}

static int		ft_isneg(const char *str, int k)
{
	if (str[k] == '+')
		return (1);
	else if (str[k] == '-')
		return (-1);
	else
		return (42);
}

int				ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		j;
	int		k;

	i = 0;
	res = 0;
	j = 1;
	k = ft_howmanyspace(str);
	if (ft_isneg(str, k) == -1)
		j = -1;
	if (str[k] == '+' || str[k] == '-')
		k = k + 1;
	while ((str[k]) != '\0')
	{
		if (str[k] < '0' || str[k] > '9')
			return (res * j);
		else
		{
			res = res * 10 + str[k++] - '0';
			i = i + 1;
		}
	}
	return (res * j);
}

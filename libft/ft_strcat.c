/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:58 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:46:45 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i = i + 1;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	s1[i] = '\0';
	return (s1);
}

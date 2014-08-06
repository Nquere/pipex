/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:58 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:47:09 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, const char *s2)
{
	int		a;

	a = 0;
	while (s2[a] != '\0')
	{
		s1[a] = s2[a];
		a = a + 1;
	}
	if (s2[a] == '\0')
		s1[a] = s2[a];
	return (s1);
}

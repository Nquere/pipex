/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:55 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:44:20 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (c >= 060 && c <= 067)
		return (1);
	else if (c >= 070 && c <= 071)
		return (1);
	else if (c >= 0101 && c <= 0107)
		return (1);
	else if (c >= 0110 && c <= 0117)
		return (1);
	else if (c >= 0120 && c <= 0127)
		return (1);
	else if (c >= 0130 && c <= 0132)
		return (1);
	else if (c >= 0141 && c <= 0147)
		return (1);
	else if (c >= 0150 && c <= 0157)
		return (1);
	else if (c >= 0160 && c <= 0167)
		return (1);
	else if (c >= 0170 && c <= 0172)
		return (1);
	else
		return (0);
}

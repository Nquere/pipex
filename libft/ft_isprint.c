/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquere <nquere@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/07 00:03:56 by nquere            #+#    #+#             */
/*   Updated: 2014/05/10 15:44:54 by nquere           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	if (c >= 040 && c <= 047)
		return (1);
	else if (c >= 050 && c <= 057)
		return (1);
	else if (c >= 060 && c <= 067)
		return (1);
	else if (c >= 070 && c <= 077)
		return (1);
	else if (c >= 0100 && c <= 0107)
		return (1);
	else if (c >= 0110 && c <= 0117)
		return (1);
	else if (c >= 0120 && c <= 0127)
		return (1);
	else if (c >= 0130 && c <= 0137)
		return (1);
	else if (c >= 0140 && c <= 0147)
		return (1);
	else if (c >= 0150 && c <= 0157)
		return (1);
	else if ((c >= 0160 && c <= 0167) || (c >= 0170 && c <= 0176))
		return (1);
	else
		return (0);
}

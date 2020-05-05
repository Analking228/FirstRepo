/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flexer <cjani@student.21-school.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:50:21 by flexer            #+#    #+#             */
/*   Updated: 2020/05/01 14:19:28 by flexer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		polar_counter(int minus, const char *s, int i)
{
	int	number;

	number = 0;
	if (minus > 0)
	{
		while (s[i] >= 48 && s[i] <= 57)
		{
			number *= 10;
			number += s[i] - 48;
			i++;
		}
	}
	else
		while (s[i] >= 48 && s[i] <= 57)
		{
			number *= 10;
			number -= s[i] - 48;
			i++;
		}
	return (number);
}

int		ft_atoi(const char *s)
{
	int	minus;
	int	i;

	i = 0;
	minus = -1;
	while (((s[i] <= 13 && s[i] >= 9) || (s[i] == 32)) && (s[i] != '\0'))
		i++;
	if (s[i] >= 48 && s[i] <= 57)
		return (polar_counter(-minus, s, i));
	else if (s[i] == 43)
		return (polar_counter(-minus, s, ++i));
	else if (s[i] == 45)
		return (polar_counter(minus, s, ++i));
	else
		return (0);
}

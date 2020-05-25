/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:11:41 by flexer            #+#    #+#             */
/*   Updated: 2020/05/25 11:24:27 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static char	*ft_revstr(char *str)
{
	size_t	l;
	size_t	i;
	char	tmp;

	l = ft_strlen(str);
	i = 0;
	while (i < (l / 2))
	{
		tmp = str[i];
		str[i] = str[l - i - 1];
		str[l - i - 1] = tmp;
		i++;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		minus;

	i = 0;
	minus = 0;
	if (n < 0)
		minus++;
	str = (char *)ft_calloc(12 + minus, sizeof(char));
	if (!str)
		return (NULL);
	str[i] = 48;
	while (n)
	{
		str[i++] = 48 + ft_abs(n % 10);
		n /= 10;
	}
	if (minus)
		str[i] = 45;
	ft_revstr(str);
	return (str);
}

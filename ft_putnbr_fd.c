/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 12:40:30 by flexer            #+#    #+#             */
/*   Updated: 2020/05/25 21:43:22 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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

void		ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	size_t	i;
	int		minus;

	i = 0;
	minus = 0;
	if (n < 0)
		minus++;
	str[i] = 48;
	while (n)
	{
		str[i++] = 48 + ft_abs(n % 10);
		n /= 10;
	}
	if (minus)
		str[i] = 45;
	str[++i] = '\0';
	ft_revstr(str);
	ft_putstr_fd(str, fd);
}

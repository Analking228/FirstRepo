/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 12:31:23 by flexer            #+#    #+#             */
/*   Updated: 2020/05/27 22:05:06 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
}

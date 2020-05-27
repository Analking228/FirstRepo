/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 14:12:42 by flexer            #+#    #+#             */
/*   Updated: 2020/05/27 21:36:27 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*ptrs;

	ptrs = src;
	if (size > 0)
	{
		while (size > 1 && *ptrs != '\0')
		{
			*dest++ = *ptrs++;
			size--;
		}
		*dest = '\0';
	}
	return (ft_strlen(src));
}

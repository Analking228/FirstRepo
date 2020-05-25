/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 12:29:28 by flexer            #+#    #+#             */
/*   Updated: 2020/05/22 13:03:12 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*ptra;
	unsigned char	ch;

	ch = (unsigned char)c;
	ptra = (unsigned char *)arr;
	if (ptra)
		while (n--)
		{
			if (*ptra == ch)
				return (ptra);
			ptra += 1;
		}
	return (NULL);
}

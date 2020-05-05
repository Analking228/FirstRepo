/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:56:12 by flexer            #+#    #+#             */
/*   Updated: 2020/05/04 13:29:16 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;
	size_t			i;

	i = 0;
	ptrs = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	while (n--)
	{
		ptrd[i] = ptrs[i];
		if (ptrd[i] == c)
			return (&ptrd[i + 1]);
		i++;
	}
	return (NULL);
}

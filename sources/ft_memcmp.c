/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:00:45 by flexer            #+#    #+#             */
/*   Updated: 2020/05/04 16:18:26 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 > *ptr2)
			return ((*ptr1 - *ptr2) * 256);
		if (*ptr1 < *ptr2)
			return (-(*ptr2 - *ptr1) * 256);
		ptr1 += 1;
		ptr2 += 1;
	}
	return (0);
}

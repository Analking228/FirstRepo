/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:31:26 by flexer            #+#    #+#             */
/*   Updated: 2020/05/05 18:05:01 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			strchecker(char *ptr_srcng, char *ptr_srcd)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = ptr_srcng;
	ptr2 = ptr_srcd;
	while (*ptr2 == '\0')
	{
		if (*ptr1 != *ptr2)
			return (0);
		ptr1 += 1;
		ptr2 += 1;
	}
	return (1);
}

char		*ft_strnstr(const char *srcng, const char *srcd, size_t n)
{
	char	*ptr_srcd;
	char	*ptr_srcng;

	ptr_srcng = (char *)srcng;
	ptr_srcd = (char *)srcd;
	if (!*ptr_srcd)
		return (ptr_srcng);
	while (n)
	{
		if (*ptr_srcng == *ptr_srcd)
			if (strchecker(ptr_srcng, ptr_srcd))
				return (ptr_srcng);
		ptr_srcng += 1;
		n--;
	}
	return (NULL);
}

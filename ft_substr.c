/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 11:31:21 by flexer            #+#    #+#             */
/*   Updated: 2020/05/22 13:31:03 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void		ft_allocation(char *s, char *d, size_t len, size_t subl)
{
	char			*cd;

	cd = d;
	if (subl < len)
	{
		while (subl--)
		{
			*cd++ = *s++;
		}
		*cd = '\0';
	}
	else
	{
		while (len--)
		{
			*cd++ = *s++;
		}
		if (*--cd != '\0')
			*++cd = '\0';
	}
}

char				*ft_substr(char const *s, unsigned int c, size_t len)
{
	size_t			substrl;
	char			*ptrs;
	char			*ptrd;

	ptrs = (char *)s;
	substrl = ft_strlen(ptrs);
	if (substrl > c)
	{
		ptrs += c;
		if (substrl > len)
			ptrd = (char *)ft_calloc(len + 1, sizeof(char));
		else
			ptrd = (char *)ft_calloc(substrl + 1, sizeof(char));
		if (!ptrd)
		{
			free (ptrd);
			return (NULL);
		}
		ft_allocation(ptrs, ptrd, len, substrl);
		return (ptrd);
	}
	return (NULL);
}

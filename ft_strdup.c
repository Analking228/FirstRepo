/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:56:29 by flexer            #+#    #+#             */
/*   Updated: 2020/05/25 11:18:37 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(str);
	newstr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, str, len + 1);
	newstr[len + 1] = '\0';
	return (newstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:56:29 by flexer            #+#    #+#             */
/*   Updated: 2020/05/10 22:12:44 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(str);
	newstr = (char *)ft_calloc(len, sizeof(char));
	ft_memcpy(newstr, str, len);
	newstr[len + 1] = '\0';
	return (newstr);
}

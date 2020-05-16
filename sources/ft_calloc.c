/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:04:35 by flexer            #+#    #+#             */
/*   Updated: 2020/05/13 16:08:24 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t sizeb)
{
	void	*memptr;

	if (!num || !sizeb)
		return (NULL);
	memptr = (void *)malloc(sizeb * num);
	if (!memptr)
		return (NULL);
	ft_bzero(memptr, num);
	return (memptr);
}

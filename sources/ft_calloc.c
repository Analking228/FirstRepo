/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:04:35 by flexer            #+#    #+#             */
/*   Updated: 2020/05/10 21:33:40 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t sizeb)
{
	void	*memptr;

	if (!num || !sizeb)
		return (NULL);
	memptr = malloc(sizeb * (num + 1));
	if (!memptr)
		return (NULL);
	return (memptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:31 by flexer            #+#    #+#             */
/*   Updated: 2020/05/04 15:40:25 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./sources/libft.h"

void		main(void)
{
	unsigned char dest[10] = "111131111";
	unsigned char src[10] = "111311111";

	//printf ("src old: %s\n",dest);
	printf ("src new: %s\n",(unsigned char *)ft_memchr(dest, '4', 7));
}

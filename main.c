/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:31 by flexer            #+#    #+#             */
/*   Updated: 2020/05/11 10:15:31 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./sources/libft.h"

void		main(void)
{
	char	src[10] = "123456789";
	char	dest[10] = "345";
	char	*ptr;
	printf ("src old: %s\n", src);
	printf ("dest old: %s\n", dest);
	ptr = strstr(src, dest);
	printf ("%s\n", ptr);
}

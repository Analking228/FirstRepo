/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:31 by flexer            #+#    #+#             */
/*   Updated: 2020/05/08 16:29:33 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./sources/libft.h"

void		main(void)
{
	char	dest[15] = "Test String";
	char	src[10] = "111111111";

	printf ("src old: %s\n", src);
	printf ("%li\n", ft_strlcpy(dest, src, 9));
	printf ("dest new: %s\n", dest);
	printf ("src new: %s\n", src);
}

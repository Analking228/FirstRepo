/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:31 by flexer            #+#    #+#             */
/*   Updated: 2020/05/07 16:06:18 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./sources/libft.h"

void		main(void)
{
	char	dest[15] = "Test String";
	int		i;

	i = 0;
	while (dest[i] != '\0')
	{
		dest[i] = ft_tolower(dest[i]);
		i++;
	}
	printf ("src new: %s\n", dest);
}

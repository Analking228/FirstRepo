/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:31 by flexer            #+#    #+#             */
/*   Updated: 2020/05/18 16:19:25 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./sources/libft.h"
#include <stdio.h>

void		main(void)
{
	char	*s;
	char	**sp;
	int		i;
	int		j;

	j = 0;
	s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	sp = ft_split(s, ' ');
	while (*s)
	{
		write(1, "1", 1);
		*s++;
	}
}

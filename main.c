/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:04:31 by flexer            #+#    #+#             */
/*   Updated: 2020/05/16 12:57:06 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./sources/libft.h"

void		main(void)
{
	char s[] = "123456789";
	char *d;
	unsigned int i;

	i = 11;
	printf("source: %s\n", s);
	d = ft_substr(s, i, 3);
	printf("dest smoker: %s\n", d);
	printf("%ld", ft_strlen(d));
}

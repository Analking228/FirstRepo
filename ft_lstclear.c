/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 13:19:00 by flexer            #+#    #+#             */
/*   Updated: 2020/05/21 18:16:51 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst || *lst)
	{
		while (tmp)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		*lst = NULL;
	}
}

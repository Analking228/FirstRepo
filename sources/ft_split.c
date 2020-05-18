/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 11:38:44 by flexer            #+#    #+#             */
/*   Updated: 2020/05/18 16:13:12 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_split_alloc(char *s, char c)
{
	char		**split;
	size_t		splitc;
	size_t		i;

	i = 0;
	splitc = 0;
	if (s[i] != c)
		splitc++;
	while (s[i])
	{
		if (s[i] == c)
			if ((s[i + 1] != c) && (s[i + 1] != '\0'))
				splitc++;
		i++;
	}
	splitc++;
	split = (char **)ft_calloc(splitc, sizeof(s));
	if (!split)
		return (NULL);
	return (split);
}

static char		**ft_split_split_alloc(char **sp, char *s, char c)
{
	size_t		i;
	size_t		count;
	size_t		j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i++] != c)
			count++;
		if ((s[i] == c && count != 0) || (s[i] != c && s[i + 1] == '\0'))
		{
			sp[j] = (char *)ft_calloc(count + 1, sizeof(char));
			if (!sp[j])
				return (NULL);
			count = 0;
			j++;
		}
	}
	sp[j] = (char *)ft_calloc(1, sizeof(char));
	sp[j] = NULL;
	return (sp);
}

char			**ft_split_injection(char **sp, char *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c && k != 0)
		{
			sp[j][k] = '\0';
			j++;
			k = 0;
		}
		if (s[i] != c)
		{
			sp[j][k] = s[i];
			k++;
		}
		i++;
	}
	return (sp);
}

void			ft_free_mem(char **split, char *s, char c)
{
	size_t		j;
	size_t		i;
	size_t		splitc;

	i = 0;
	j = 0;
	splitc = 0;
	if (s[i] != c)
		splitc++;
	while (s[i])
	{
		if (s[i] == c)
			if ((s[i + 1] != c) && (s[i + 1] != '\0'))
				splitc++;
		i++;
	}
	splitc++;
	while (j < splitc)
	{
		free(split[j]);
		j++;
	}
}

char			**ft_split(char const *s, char c)
{
	char		**split;
	char		*str;

	str = (char *)s;
	split = ft_split_alloc(str, c);
	split = ft_split_split_alloc(split, str, c);
	split = ft_split_injection(split, str, c);
	if (!split)
	{
		ft_free_mem(split, str, c);
		return (NULL);
	}
	return (split);
}

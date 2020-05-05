/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjani <cjani@studen.21-school.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 12:41:03 by flexer            #+#    #+#             */
/*   Updated: 2020/05/04 16:21:46 by cjani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *dest, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif

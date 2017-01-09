/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:36:35 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/06 18:43:45 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_atoi(char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int 				ft_isdigit(int c);
int 				ft_isprint(int c);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int n);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*strcat(char *s1, char *s2);
char				*strncat(char *s1, char *s2, size_t n);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 15:39:59 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/09 11:24:07 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t			ft_strlcat(char *dst, const char *src. size_t size)
{
	const char		*src_temp;
	char			*dest_temp;
	size_t			src_size;
	size_t			dst_len;

	src_temp = src;
	dest_temp = dst;
	

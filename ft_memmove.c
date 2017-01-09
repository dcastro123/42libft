/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:26:29 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/09 14:33:48 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_temp;
	char	*src_temp;
	char	*move_temp;
	int		i;

	i = 0;
	dst_temp = (char *)dst;
	src_temp = (char *)src;
	while (i < len)
	{
		move_temp[i] = src_temp[i];
		i++;
	}
	while (i < len)
	{
		dst_temp[i] = move_temp[i];
		i++;
	}
}

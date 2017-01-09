/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:59:03 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/06 14:11:06 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;
	char	*temp;

	i = 0;
	temp = dst;
	while (len > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		--len;
	}
	while (len > 0)
	{
		dst[i] = '\0';
		len--;
	}
	return (temp);
}

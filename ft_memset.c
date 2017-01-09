/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:15:44 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/09 15:25:39 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *temp;

	temp = b;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (b);
}

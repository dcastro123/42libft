/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:25:13 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/09 13:56:04 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = malloc(size);
	if (m == NULL)
		return NULL;
	if (m)
		ft_bzero(m, size);
	return (m);
}

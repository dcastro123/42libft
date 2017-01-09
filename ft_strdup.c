/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:54:57 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/06 14:10:44 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strdup(const char *s1)
{
	int		i;
	char	*temp;

	i = 0;
	while (s1[i] != '\0')
		i++;
	temp = ((char*)malloc(sizeof(s1) * i + 1));
	if (temp == NULL)
		return ('\0');
	i = 0;
	while (s1[i])
	{
		s1[i] = temp[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

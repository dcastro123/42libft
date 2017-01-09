/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 15:18:29 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/07 15:35:36 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	char *big_temp;
	char *little_temp;

	if (*little == '\0')
		return (big);
	while (*big)
	{
		big_temp = big;
		little_temp = little;
		while (*big && little_temp && *big == *little_temp && len > 0)
		{
			big++;
			little_temp++;
			len--;
		}
		if (!*little_temp)
			return (big_temp);
		big = big_temp + 1;
	}
	return (NULL);
}

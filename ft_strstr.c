/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 19:21:45 by dcastro-          #+#    #+#             */
/*   Updated: 2017/01/07 15:13:42 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	char *little_temp;
	char *big_temp;

	if (*little == '\0')
		return big;
	while (*big)
	{
		little_temp = little;
		big_temp = big;
		while (*big && *little_temp && *big == *little_temp)
		{
			big++;
			little_temp++;
		}
		if (!*pattern)
			return (big_temp);
		big = big_temp + 1;
	}
	return (NULL);
}

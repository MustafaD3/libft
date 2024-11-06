/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:10:53 by mustafa           #+#    #+#             */
/*   Updated: 2024/11/05 00:01:11 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i <= len)
		{
			if (s[i] == (char)c)
				return ((char *)&s[i]);
			i++;
		}
	}
	return ((char *)0);
}

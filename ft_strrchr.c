/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:47:35 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/31 23:49:04 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;
	char	*ref;

	ref = (char *)0;
	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i <= len)
		{
			if (s[i] == (char)c)
				ref = (char *)&s[i];
			i++;
		}
	}
	return (ref);
}

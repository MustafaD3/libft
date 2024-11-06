/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:17:42 by mustafa           #+#    #+#             */
/*   Updated: 2024/11/05 00:03:37 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!str || !find)
		return (NULL);
	if (!(*find))
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i] == find[j] && str[i] && i < len)
		{
			i++;
			j++;
		}
		if (!find[j])
			return ((char *)&str[i - j]);
		i = (i - j) + 1;
	}
	return ((char *)0);
}

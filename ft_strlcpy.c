/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:54:29 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/11 14:02:44 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t len)
{
	int	i;

	i = 0;
	if (len == 0)
		return (ft_strlen(s));
	while (len - 1 > 0 && s[i])
	{
		d[i] = s[i];
		i++;
		len--;
	}
	d[i] = '\0';
	return ((size_t)ft_strlen(s));
}

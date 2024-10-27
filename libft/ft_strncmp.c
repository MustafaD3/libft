/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:09:19 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 17:57:09 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	if (n == 0)
		return (0);
	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	i = 0;
	while (s1cpy[i] && s2cpy[i] && s1cpy[i] == s2cpy[i])
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return (s1cpy[i] - s2cpy[i]);
}

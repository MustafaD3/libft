/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:13:39 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 17:53:16 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcstr;
	unsigned char	*deststr;

	srcstr = (unsigned char *)src;
	deststr = (unsigned char *)dest;
	i = 0;
	if (!dest || !src)
		return (0);
	while (i < n)
	{
		deststr[i] = srcstr[i];
		i++;
	}
	return ((void *)deststr);
}

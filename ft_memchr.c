/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:42:28 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 18:16:04 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *) s;
	while (n > 0)
	{
		if (string[i] == c)
			return ((void *)&string[i]);
		i++;
		n--;
	}
	return (0);
}

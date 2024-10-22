/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:47:35 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/10 17:06:51 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*reference;

	reference = NULL;
	i = 0;
	while (s[i] && s[i] != '\0')
	{
		if (s[i] == c)
			reference = (char *)&s[i];
		i++;
	}
	if (reference)
		return (reference);
	if (c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

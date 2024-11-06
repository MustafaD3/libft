/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:34:49 by mustafa           #+#    #+#             */
/*   Updated: 2024/11/01 23:03:33 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*totalstr;

	i = 0;
	x = 0;
	totalstr = malloc(sizeof(char) * ft_strlen(s1) +ft_strlen(s2) + 1);
	if (!totalstr)
		return ((char *)0);
	while (s1[x])
	{
		totalstr[i] = s1[x];
		i++;
		x++;
	}
	x = 0;
	while (s2[x])
	{
		totalstr[i] = s2[x];
		i++;
		x++;
	}
	totalstr[i] = '\0';
	return (totalstr);
}

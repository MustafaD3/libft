/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:42:42 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/20 01:23:15 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Alfabetik Karakter Veya Rakam Kontrolu
int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
	{
		return (1);
	}
	return (0);
}

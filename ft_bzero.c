/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:46:31 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 17:47:30 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Belirtilen Alana Belirtilen Miktar Kadar Null Yani '\0' Karakteri Ekler
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

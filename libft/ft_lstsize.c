/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 23:45:40 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 17:46:10 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*copylst;
	int		i;

	copylst = lst;
	i = 0;
	while (copylst)
	{
		i++;
		copylst = copylst->next;
	}
	return (i);
}

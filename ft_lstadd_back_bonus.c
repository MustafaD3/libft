/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 01:12:54 by mustafa           #+#    #+#             */
/*   Updated: 2024/10/21 18:24:41 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastlst;

	if (lst)
	{
		if (*lst)
		{
			lastlst = ft_lstlast(*lst);
			lastlst -> next = new;
			new->next = NULL;
		}
		else
			*lst = new;
	}
}

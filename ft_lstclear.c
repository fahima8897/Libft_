/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:49:29 by fboumell          #+#    #+#             */
/*   Updated: 2021/06/09 16:05:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*suivant;

	if (!del || !lst)
		return ;
	tmp = *lst;
	while (tmp)
	{		
		suivant = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = suivant;
	}
	(*lst) = NULL;
}

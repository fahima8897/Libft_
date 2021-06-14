/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:19:02 by marvin            #+#    #+#             */
/*   Updated: 2021/06/14 20:05:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new;
    t_list    *current;

    if (!lst || !f) 
        return (NULL);
    if (!(new = ft_lstnew(f(lst->content))))
        return (NULL);
    current = new;
    lst = lst->next;
    while (lst)
    {
        if (!(current->next = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&new, del);
            return (0);
        }
        current = current->next;
        lst = lst->next;
    }
    return (new);
}

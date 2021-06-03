/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:24:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/06/03 13:20:39 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* comme malloc elle sert a allouer de la memeoire mais la 
 difference c'est qu'elle initialise a 0 tous les elements 
 de la zone memoire. 
 count = nombre d'elements qu'on souhaite stocker
 size = taille de ces elements */

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = (void *)malloc(size * count);
	if (!s)
		return (NULL);
	ft_bzero(s, count);
	return (s);
}

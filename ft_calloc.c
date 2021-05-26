/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:24:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/26 17:01:05 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* comme malloc elle sert a allouer de la memeoire mais la 
 difference c'est qu'elle initialise a 0 tous les elements 
 de la zone memoire. 
 nmemb = nombre d'elements qu'on souhaite stocker
 size = taille de ces elements */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (!(s = (void *)calloc(sizeof(void) * nmemb
}

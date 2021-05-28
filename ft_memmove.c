/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:58:38 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/28 15:08:34 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*la differnce avec memcpy est aue les 2 zones de memoire (dest et src
 peuvent se chauvaucher.En cas de chevauchement, la zone source est
 d'abord copiée dans une zone temporaire, qui ne chevauche aucune des
 deux zones pointées par source et destination, la zone temporaire 
 est ensuite copiee vers la zone de destination.*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	tmp;
	size_t	i;

	d = dest;
	s = (char *)src;
	i = 0;
	if (d > s)
	{	
		while (i < n)
		{
			tmp = s[i];
			d[i] = tmp;
			i++;
		}
	}
	else 
		while (n)
		{
			*d = *s;
			s++;
			d++;
			n--;
		}
	return (dest);
}

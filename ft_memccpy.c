/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:02:39 by fboumell          #+#    #+#             */
/*   Updated: 2021/05/24 14:56:02 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La fonction memccpy() copie au plus n octets de la zone mémoire
  src vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c.
  La fonction memccpy() renvoie un pointeur sur le caractère immédiatement après
  c dans la zone dest, ou NULL si c n'a pas été trouvé dans les n premiers 
  caractères de src.*/
//l'entier c doit etre converti en unsigned char

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char) c)
			return (dest + 1);
		i++;
	}
	return (NULL);
}

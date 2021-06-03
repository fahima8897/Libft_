/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:05:44 by marvin            #+#    #+#             */
/*   Updated: 2021/06/03 13:38:08 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*la fonction doit retourner la taille initiale de dst + celle 
 de src */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	while (src[len] && i + 1 < size)
	{
		dst[i] = src[len];
		len++;
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:05:44 by marvin            #+#    #+#             */
/*   Updated: 2021/05/26 12:23:40 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*la fonction doit retourner la taille initiale de dst + celle 
 de src */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return ((size - 1) + j);
}

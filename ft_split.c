/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 11:44:09 by marvin            #+#    #+#             */
/*   Updated: 2021/06/15 16:47:20 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

void	ft_free(char **tab, size)
{
	int	i;

	i = 0;
	if (!tab[i])
	{
		while (i < size)
			free(tab[i]);
		free(tab);
		return (NULL);
}

static char	**ft_count_letters(char **tab, const char *s, char c, int size)
{
	int	i;
	int j;
	int count_l;

	i = 0;
	j = 0;
	count_l = 0;
	while (s[j] != '\0' && i < size)
	{
		if (s[j] == c)
			j++;
		else
		{
			while (s[j] != '\0' && s[j] != c)
				count_l++;
				j++;
		}
		tab[i] = malloc(sizeof(char) * (count_l + 1));
		ft_free(tab, size);
	
		count_l = 0;
		i++;
	}
}

char    **ft_split(char const *s, char c)
{
	char **tab;
	int	size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	tab[size] = NULL;
	ft_count_letters(tab, s, c, size);
	return (tab);
}

#include <stdio.h>

int main()
{
	printf("%d", count_words("ahealaloa", 'a'));
}

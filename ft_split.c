/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demane <emanedanielakim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:10:28 by demane            #+#    #+#             */
/*   Updated: 2025/11/08 15:26:23 by demane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issep(char c1, char c2)
{
	return (c1 == c2);
}

static int	ft_countwords(char const *str, char c)
{
	int	nb_words;
	int	i;
	int	in_words;

	i = 0;
	in_words = 0;
	nb_words = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (in_words == 0 && ft_issep(str[i], c) == 0)
		{
			in_words = 1;
			nb_words++;
		}
		if (in_words == 1 && ft_issep(str[i], c) == 1)
			in_words = 0;
		i++;
	}
	return (nb_words);
}

static char	*ft_copywords(char const *str, int width_words)
{
	char	*new_word;
	int		i;

	i = 0;
	if (width_words == 0 || !str)
		return (NULL);
	new_word = (char *)malloc(sizeof(char) * (width_words + 1));
	if (!new_word)
		return (NULL);
	while (i < width_words)
		new_word[i++] = *(str++);
	new_word[i] = '\0';
	return (new_word);
}

char	**ft_split(char const *str, char c)
{
	int		nb_words;
	int		i;
	int		j;
	int		k;
	char	**strs;

	i = 0;
	k = 0;
	if (!str)
		return (NULL);
	nb_words = ft_countwords(str, c);
	strs = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!strs)
		return (NULL);
	while (str[i] && k < nb_words)
	{
		j = i;
		while (str[j] && ft_issep(str[j], c) == 0)
			j++;
		if (j - i > 0)
			strs[k++] = ft_copywords(&str[i], j - i);
		i = j + 1;
	}
	strs[k] = NULL;
	return (strs);
}

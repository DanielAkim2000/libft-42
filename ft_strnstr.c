/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demane <emanedanielakim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:36:37 by demane            #+#    #+#             */
/*   Updated: 2025/11/08 16:12:38 by demane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*ptr;
	size_t		i;
	size_t		j;

	ptr = haystack;
	i = 0;
	if (!*needle || len == 0)
		return ((char *)haystack);
	while (ptr[i] != '\0' && i < len)
	{
		j = 0;
		if (ptr[i] == needle[j])
		{
			while (ptr[i + j] && ptr[i + j] == needle[j] && (i + j) < len)
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

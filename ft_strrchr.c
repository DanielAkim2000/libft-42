/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demane <emanedanielakim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:16:28 by demane            #+#    #+#             */
/*   Updated: 2025/11/08 16:11:49 by demane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*rtr;

	ptr = (char *)s;
	rtr = NULL;
	while (*ptr)
	{
		if (*ptr == c)
			rtr = ptr;
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (rtr);
}

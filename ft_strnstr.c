/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 21:29:38 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:39:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && ft_strlen(needle) <= len && i < len)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)&haystack[i - j + 1]);
		}
		else
			j = 0;
		i++;
	}
	return (0);
}

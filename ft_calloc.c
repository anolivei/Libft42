/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:58:14 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 18:31:41 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	memory = malloc(size * count);
	if (memory == 0)
		return (0);
	while (i <= size * count)
	{
		((char *)memory)[i] = 0;
		i++;
	}
	return (memory);
}

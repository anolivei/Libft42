/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 21:38:57 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/30 22:06:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	last = *lst;
	if (last != 0)
	{
		while (last->next != 0)
			last = last->next;
		if (last == 0)
			last = new;
		else
			last->next = new;
	}
	else
		*lst = new;
}

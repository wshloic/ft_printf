/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <lbertran@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:45:23 by lbertran          #+#    #+#             */
/*   Updated: 2020/11/24 13:51:19 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	if (!lst)
		return ;
	next = lst;
	while (TRUE)
	{
		(*f)(next->content);
		next = next->next;
		if (!next)
			return ;
	}
}

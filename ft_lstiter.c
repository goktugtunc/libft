/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:06:33 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/28 18:54:52 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;

	list = lst;
	if (list == NULL)
		return ;
	while (list->next != NULL)
	{
		f(list->content);
		list = list->next;
	}
	f(list->content);
}

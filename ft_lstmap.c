/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:55:37 by gotunc            #+#    #+#             */
/*   Updated: 2023/08/01 01:12:54 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buffer;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	buffer = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&buffer, del);
			return (NULL);
		}
		ft_lstadd_back(&buffer, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (buffer);
}

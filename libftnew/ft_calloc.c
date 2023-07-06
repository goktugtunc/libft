/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 01:01:33 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/06 01:58:31 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;
	int		i;

	i = 0;
	d = (char *)malloc(size * count);
	if (!d)
		return (0);
	while (i < count)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}

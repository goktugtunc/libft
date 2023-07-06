/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:03:12 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/06 01:10:35 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*dest;
	int		i;

	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (dest[i] && i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return ((void *)dest);
}

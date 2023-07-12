/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:52 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/11 19:31:28 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*source;
	char	*dest;

	dest = (char *)dst;
	source = (char *)src;
	if (dst == 0 && src == 0)
		return (NULL);
	i = 0;
	if (dest > source)
	{
		while (len-- > 0)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}

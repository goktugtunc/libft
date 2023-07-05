/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:16:11 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 15:18:05 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	x;
	char			*dest;
	char			*source;

	x = ft_strlen(src);
	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dstsize != 0)
	{
		while (source [i] != '\0' && i < dstsize - 1)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

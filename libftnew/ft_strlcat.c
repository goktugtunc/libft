/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:19:44 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 15:59:12 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	char	*dest;
	char	*source;

	i = 0;
	len = ft_strlen(dest);
	dest = (char *)dst;
	source = (char *)src;
	while (i < dstsize - 1 && source)
	{
		dest[len + i] = source[i];
		i++;
	}
	dest[len + i] = 0;
	return (ft_strlen(dest));
}

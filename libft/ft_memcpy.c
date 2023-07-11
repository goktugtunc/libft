/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:03:12 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/11 19:25:43 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	char			*dest;
	int				i;

	source = (unsigned char *)src;
	dest = (char *)dst;
	i = 0;
	if (dest == 0 && source == 0)
		return (source);
	while ((i < ft_strlen(source) && i < n) || (!source[i] && i != ft_strlen(source)))
	{
		dest[i] = (char)source[i];
		i++;
	}
	if (ft_strlen(source) < n)
		dest[i] = 0;
	return ((void *)dest);
}

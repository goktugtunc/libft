/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 02:03:22 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 02:37:00 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*m;

	m = (char *)s;
	i = 0;
	while (m[i] != 0 && i < n)
	{
		if (m[i] == c)
			return ((void *)s + (i * sizeof(char)));
		i++;
	}
	return (0);
}

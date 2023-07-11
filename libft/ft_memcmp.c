/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 02:40:24 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/11 19:37:50 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*m1;
	unsigned char	*m2;

	i = 0;
	m1 = (unsigned char *)s1;
	m2 = (unsigned char *)s2;
	while (i < n)
	{
		if (m1[i] != m2[i] && m1[i] && m2[i])
			return (m1[i] - m2[i]);
		else if (m1[i] == '\0' && m2[i])
			return (-1);
		else if (m1[i] != '\0' && m2[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

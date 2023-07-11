/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:04:50 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/06 23:36:13 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;
	unsigned char	*m;
	int				i;

	d = c;
	i = 0;
	m = (unsigned char *)s;
	while (i != (ft_strlen(m) + 1) && m)
	{
		if (s[i] == d)
			return (s + (i * sizeof(char)));
		else
			i++;
	}
	return (NULL);
}

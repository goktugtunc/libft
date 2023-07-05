/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:04:50 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 00:05:30 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*m;
	int		i;

	i = 0;
	m = (char *)s;
	while (i != (ft_strlen(m) + 2))
	{
		if (s[i] == c)
			return (s + (i * sizeof(char)));
		else
			i++;
	}
	return (NULL);
}

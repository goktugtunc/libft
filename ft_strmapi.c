/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:13:21 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/11 18:23:44 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	char			*m;
	unsigned int	i;

	m = (char *)s;
	d = (char *)malloc(sizeof(char) * (ft_strlen(m) + 1));
	i = 0;
	if (!d)
		return (NULL);
	while (m[i] && m)
	{
		d[i] = f(i, (char)m[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}

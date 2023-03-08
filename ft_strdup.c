/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:14:37 by kali              #+#    #+#             */
/*   Updated: 2023/03/08 17:08:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strlenn(char *title)
{
	int	i;

	i = 0;
	while (title[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	char	*src;
	int	i;
	int	c;

	i = 0;
	src = (char *)s;
	c = ft_strlenn(src);
	dest = (char *) malloc (c * sizeof(char));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

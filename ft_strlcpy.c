/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:57:22 by kali              #+#    #+#             */
/*   Updated: 2023/03/08 16:54:21 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlenn(char *title)
{
	int	i;

	i = 0;
	while (title[i])
		i++;
	return (i);
}

size_t	strlcpy(char *destination, const char *source, size_t size)
{
	char	*src;
	size_t	d;
	size_t	i;

	src = (char *)source;
	d = ft_strlenn(destination);
	i = 0;
	while (i < size)
	{
		destination[d + i] = src[i];
		i++;
	}
	destination[d + i] = 0;
	return (d);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:42:47 by kali              #+#    #+#             */
/*   Updated: 2023/03/08 16:58:40 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	deneme(char *title)
{
	int	i;

	i = 0;
	while (title[i])
		i++;
	return (i);
}

size_t	strlcat(char *destination, const char *source, size_t size)
{
	size_t	i;
	int	d;
	char	*src;

	src = (char *)source;
	d = deneme(destination);
	i = 0;
	while (destination[i] && i < size)
	{
		write(1, &destination[i], 1);
		i++;
	}
	i = 0;
	while (src[i] && i < size)
	{
		write(1, &src[i], 1);
		i++;
	}
	return (d + size);
}

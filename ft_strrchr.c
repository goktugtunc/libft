/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:21:36 by kali              #+#    #+#             */
/*   Updated: 2023/03/04 17:48:27 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	sayac;
	int	i;
	int	endmatch;

	i = 0;
	endmatch = 0;
	sayac = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			sayac++;
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			endmatch++;
		if ((sayac == endmatch) && sayac != 0)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

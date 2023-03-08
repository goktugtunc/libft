/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:49:52 by kali              #+#    #+#             */
/*   Updated: 2023/03/04 18:52:19 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	res1;
	size_t	res2;
	size_t	i;

	i = 0;
	res1 = 0;
	res2 = 0;
	while (i < n)
	{
		res1 += s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		res2 += s2[i];
		i++;
	}
	return (res1 - res2);
}

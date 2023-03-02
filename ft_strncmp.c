/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:49:52 by kali              #+#    #+#             */
/*   Updated: 2023/03/02 17:55:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
	long unsigned int	i;
	int	res1;
	int	res2;

	i = 0;
	res1 = 0;
	res2 = 0;
	while (s1[i] != '\0' && i < n)
	{
		res1 += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		res2 += s2[i];
		i++;
	}
	return (res1 - res2);
}

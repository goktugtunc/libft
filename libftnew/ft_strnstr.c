/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 03:09:51 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 03:41:11 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*m1;
	char	*m2;
	size_t	found;

	i = 0;
	m1 = (char *)haystack;
	m2 = (char *)needle;
	found = 0;
	if (m2[0] == 0)
		return (m1);
	while (m1[i] && i < len)
	{
		if (m1[i] == m2[found])
		{
			if (m2[found + 1] == 0)
				return (m1 + (i - found));
			found++;
		}
		else
			found = 0;
		i++;
	}
	return (0);
}

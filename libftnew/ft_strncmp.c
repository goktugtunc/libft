/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 01:14:46 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 03:08:30 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*m1;
	char	*m2;

	i = 0;
	m1 = (char *)s1;
	m2 = (char *)s2;
	while (i < n)
	{
		if (m1[i] != m2[i] && s1[i] && s2[i])
			return (1);
		else if (m1[i] == 0 && m2[i] != 0)
			return (-1);
		else if (m1[i] && m2[i] == 0)
			return (1);
		i++;
	}
	return (0);
}

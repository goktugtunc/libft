/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:50:26 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/07 15:52:45 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	int		i;
	int		j;

	i = -1;
	j = 0;
	d = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!d)
		return (0);
	else
	{
		while (s1[++i])
			d[i] = s1[i];
		while (s2[j])
		{
			d[i] = s2[j];
			j++;
			i++;
		}
		d[i] = 0;
		return (d);
	}
	return (0);
}

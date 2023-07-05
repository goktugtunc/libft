/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:06:39 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 00:07:32 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		res;
	char	*title;

	title = (char *)s;
	i = 0;
	res = -1;
	while (i != (ft_strlen(title) + 2))
	{
		if (title[i] == c)
			res = i;
		i++;
	}
	if (res != -1)
		return (s + (res * sizeof(char)));
	return (0);
}

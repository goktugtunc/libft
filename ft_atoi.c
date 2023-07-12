/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:59:55 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/05 11:01:04 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	posorneg(char *str)
{
	int	l;
	int	c;
	int	s;

	l = 0;
	c = 0;
	s = 1;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-' && ft_isdigit(str[c + 1]) == 1)
			s = -1;
		l++;
		if (l != 1)
			s = 0;
		c++;
	}
	return (s);
}

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;
	int	l;

	c = 0;
	s = 1;
	res = 0;
	l = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	s = posorneg((char *)str + c);
	while (str[c] == '+' || str[c] == '-')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

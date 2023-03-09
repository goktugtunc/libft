/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 08:19:47 by kali              #+#    #+#             */
/*   Updated: 2023/03/09 09:13:08 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *nptr)
{
	int	ft_symbol;
	int	number;
	int	i;
	char	*title;

	i = 0;
	number = 0;
	ft_symbol = 1;
	title = (char *)nptr;
	while (title[i])
	{
		if (title[i] == '-')
			ft_symbol = -1;
		while (title[i] >= '0' && title[i] <= '9')
		{
			number = (number * 10) + (title[i] - 48);
			if (!(title[i + 1] >= '0' && title[i + 1] <= '9'))
				return (number * ft_symbol);
			i++;
		}
	}
	return (0);
}

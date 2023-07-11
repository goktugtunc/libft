/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:20:47 by gotunc            #+#    #+#             */
/*   Updated: 2023/07/11 18:19:03 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int  print_reverse(long a)
{
    if (a == 0)
        return (1);
    else
    {
        if (print_reverse(a / 10) == 1)
        {
            ft_putchar_fd(a % 10 + 48,1);
            return (1);
        }
    }
    return (-1);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	long	a;

	a = n;
	if (a == -2147483648)
		write(fd, "-2147483648", 11);
	else if (a < 0)
	{
		write(fd, "-", 1);
		a *= -1;
		ft_putnbr_fd(a, fd);
	}
	else if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
	else if (a > -1 && a < 10, fd)
	{
		a += 48;
		write(fd, &a, 1);
	}
}

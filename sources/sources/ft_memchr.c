/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:00:53 by kali              #+#    #+#             */
/*   Updated: 2023/03/01 16:18:30 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *deneme(char *s, int c, int n)
{
        int     i;

        i = 0;
        while (s[i] != '\0' && i < n)
        {
                if (s[i] == c)
                        return (s + i);
                i++;
        }
        return (NULL);
}

void *ft_memchr(const void *s, int c, size_t n)
{
        char	*a;

        a = deneme(s, c, n);
        return (a);
}

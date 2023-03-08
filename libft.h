/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:19:15 by kali              #+#    #+#             */
/*   Updated: 2023/03/08 16:59:45 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
int	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s);
size_t	strlcpy(char *destination, const char *source, size_t size);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
size_t	strlcat(char *destination, const char *source, size_t size);

#endif

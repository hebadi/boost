/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_libft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:06:24 by hebadi            #+#    #+#             */
/*   Updated: 2018/09/14 18:49:32 by hebadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_LIBFT_H
# define B_LIBFT_H
# define LINE write( 1, "\n", 1)
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_memset(void *ptr, int substitute, size_t len);

/*
** int 	ft_atoi(char *str);
*/

#endif

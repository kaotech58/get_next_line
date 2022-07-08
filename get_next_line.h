/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:37:18 by teiffe            #+#    #+#             */
/*   Updated: 2022/07/08 12:59:50 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int i);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

#endif

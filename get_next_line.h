/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teiffe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:37:18 by teiffe            #+#    #+#             */
/*   Updated: 2022/03/01 14:29:12 by teiffe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int i);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
static char	*ft_read_file(int fd, char *buffer, char *backup);
static char	*ft_line(char *line);
char		*get_next_line(int fd);

#endif

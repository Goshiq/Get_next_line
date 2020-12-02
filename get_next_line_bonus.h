/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmogo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:20:45 by jmogo             #+#    #+#             */
/*   Updated: 2020/11/21 18:21:02 by jmogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char	*s, char c);
char	*ft_strdup(char *s);
int		free_str(char *s, char *arr);
int		ft_do_arr(char **arr, char **line, size_t got);
int		check(int fd, char **line, char **s);
int		ft_spec(char **arr, char *npos, char **line);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:04:57 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/11/06 14:22:51 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <errno.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_fd_list
{
	int					fd;
	char				*buffer;
	struct s_fd_list	*next;
}						t_fd_list;

char					*get_next_line(int fd);
int						ft_gnl_strchr(const char *s, int c);
void					ft_gnl_strlcpy(char *dst, const char *src, size_t size);
size_t					ft_gnl_strlen(const char *s);
char					*ft_gnl_strjoin(char const *s1, char const *s2);
t_fd_list				*ft_gnl_lst_add_new(int fd, t_fd_list **node);

#endif
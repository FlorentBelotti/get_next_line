/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:11:58 by fbelotti          #+#    #+#             */
/*   Updated: 2023/11/17 17:05:05 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct s_list {
	char			*content;
	struct s_list	*next;
}	t_list;

char		*get_next_line(int fd);
void		put_line(t_list *list, char **line);
int			search_for_newline(t_list *list);
int			ft_strlen(const char *str);
void		clean_list(t_list **list);
void		create_list(t_list **list, int fd);
void		malloc_of_line(char **line, t_list *list);
void		free_list(t_list *list);
t_list		*ft_lstlast(t_list *stash);

#endif

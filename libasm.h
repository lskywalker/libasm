/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libams.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmit <lsmit@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 19:21:54 by lsmit         #+#    #+#                 */
/*   Updated: 2020/10/26 14:52:46 by lsmit         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H

# define LIBASM_H

# include "stdio.h"
# include "unistd.h"
# include "string.h"
# include "stdlib.h"
# include "fcntl.h"

extern int		ft_strlen(const char *str);
extern char		*ft_strcpy(const char *dest, const char *src);
extern int		ft_strcmp(const char *s1, const char *s2);
extern ssize_t	ft_write(int fd, const void *buf, size_t count);
extern ssize_t	ft_read(int fd, const void *buf, size_t count);
extern char		*ft_strdup(const char *s1);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:47:32 by aassaad-          #+#    #+#             */
/*   Updated: 2024/05/22 18:49:07 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1
#endif

char *get_next_line(int fd);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strchr(const char *str, int c);
size_t ft_strlen(const char *str);
char *ft_strdup(const char *s1);
char *ft_substr(char const *str, unsigned int start, size_t len);

#endif

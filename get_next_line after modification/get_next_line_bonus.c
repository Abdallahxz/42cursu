/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:45:34 by aassaad-          #+#    #+#             */
/*   Updated: 2024/05/22 18:48:59 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*shift_ln(char *ln)
{
	int		i;
	int		nl;
	char	*ret;

	i = 0;
	nl = ft_strchr(ln, '\n') + 1;
	ret = ft_calloc(BUFFER_SIZE + 1, 1);
	while (nl < BUFFER_SIZE && ln[nl] != '\0')
		ret[i++] = ln[nl++];
	free (ln);
	if (*ret == '\0')
	{
		free (ret);
		return (NULL);
	}
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*ln[1024];
	char		*ans;
	int			ret;

	if (fd < 0 || BUFFER_SIZE < 1 || fd > 1024)
		return (NULL);
	ans = copy_line(NULL, ln[fd]);
	while (check_nl(ln[fd]) < 1)
	{
		free (ln[fd]);
		ln[fd] = ft_calloc(BUFFER_SIZE + 1, 1);
		ret = read(fd, ln[fd], BUFFER_SIZE);
		if (ret <= 0)
		{
			free (ln[fd]);
			ln[fd] = NULL;
			if (ans != NULL && ret != -1)
				return (ans);
			free (ans);
			return (NULL);
		}
		ans = copy_line(ans, ln[fd]);
	}
	ln[fd] = shift_ln(ln[fd]);
	return (ans);
}

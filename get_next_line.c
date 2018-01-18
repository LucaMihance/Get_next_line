/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmihance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:23:46 by lmihance          #+#    #+#             */
/*   Updated: 2018/01/16 20:40:22 by lmihance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	static char	*str;
	char		*buf;
	int			ret;

	str = ft_strdup("");
	buf = ft_strdup("");
	while ((ret = read(fd, buf, 1)) > 0)
	{
		buf[ret] = '\0';
		read(-1, str, BUFF_SIZE);
		if (buf[0] == '\n')
			break ;
		str = ft_strjoin(str, buf);
	}
	if (ret == -1)
		return (-1);
	if (ret == 0 && ft_strlen(str) == 0)
		return (0);
	*line = str;
	return (1);
}

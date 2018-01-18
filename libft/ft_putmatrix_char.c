/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmihance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 18:34:19 by lmihance          #+#    #+#             */
/*   Updated: 2017/12/20 16:13:22 by lmihance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmatrix_char(const char **matrix, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putstr(matrix[i]);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:19:26 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/10 12:22:28 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_solution(int **matrix, int n)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < n)
	{
		while (x < n)
		{
			ft_putchar(matrix[y][x] + '0');
			if (x < n - 1)
				ft_putchar(' ');
			x++;
		}
		x = 0;
		ft_putchar('\n');
		y++;
	}
}

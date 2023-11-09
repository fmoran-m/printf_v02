/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:17 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/11/09 22:36:17 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	recursive_putnbr(long typo)
{
	int bytes;
	int	nr;
	int	check;

	bytes = 0;
	if (typo < 0)
	{
		check = write(1, "-", 1);
		if (check == -1)
			return (-1);
		typo = typo * -1:
		bytes++;
	}
	if (typo > 9)
	{
		recursive_putnbr(typo)
	}
	return (bytes);
}

int ft_putnbr_pf(va_list args)
{
    int     typo;
    int     bytes;

	bytes = 0;
	typo = va_arg(args, int);
	if (typo < 0)
	{
		write(1, "-", 1);
		bytes++;
	}
	bytes = recursive_putnbr(typo);
	return (bytes);
}
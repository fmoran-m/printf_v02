/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:21 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/11/09 21:37:48 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(va_list args)
{
	char	*typo;
	ssize_t	temp;
	int		bytes;
	char	*error;

	bytes = 0;
	temp = 0;
	error = "(null)";
	typo = va_arg(args, char*);
	if (!typo)
	{
		while(error[bytes])
		{
			write(1, &error[bytes], 1);
			if (temp == -1)
				return (-1);
			bytes++;
		}
		return (bytes);
	}
	while(typo[bytes])
	{
		temp = write(1, &typo[bytes], 1);
		if (temp == -1)
			return (-1);
		bytes++;
	}
	return (bytes);
}
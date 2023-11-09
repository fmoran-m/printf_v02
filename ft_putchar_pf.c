/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:18:16 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/11/09 21:46:24 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_char_pf(va_list args)
{
	int 	typo;
	ssize_t	bytes;

	typo = va_arg(args, int);
	bytes = write(1, &typo, 1);
	return (bytes);
}
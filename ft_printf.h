/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:52:18 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/11/09 21:38:58 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <string.h>
# include "libft/libft.h"

int	ft_printf(char const *format, ...);
int	ft_putstr_pf(va_list args);
int	ft_put_char_pf(va_list args);
int	write_lower_hex(va_list args);
int	write_number(va_list args);
int	write_unsigned(va_list args);
int	write_upper_hex(va_list args);
int	write_pointer_address(va_list args);
#endif

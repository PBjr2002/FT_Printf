/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:29:02 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/31 11:38:46 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft_printf/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_put_unint(unsigned int n);
int	ft_putnbr(int n);
int	ft_put_ptr(unsigned long long ptr);
int	ft_put_hexup(unsigned int n);
int	ft_put_hexlow(unsigned int n);

#endif
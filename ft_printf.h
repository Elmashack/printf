/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 00:29:51 by elman             #+#    #+#             */
/*   Updated: 2021/07/17 14:15:29 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"
# define HEXDEC_LOW "0123456789abcdef"
# define HEXDEC_UPPER "0123456789ABCDEF"
//# define malloc(x) NULL
//functions
int		ft_printf(const char *frm, ...);
int		ft_count_symbol(long long num);
char	*ft_puthex(unsigned int hex, char **str);
int		ft_hexlen(unsigned int adrs);
char	*ft_putptr(unsigned long adrs);
int		ft_ptrlen(unsigned long adrs);
int		ft_print_s(char *string);
int		ft_print_d(int num);
int		ft_print_ptr(unsigned long address);
int		ft_print_ch(char ch);
int		ft_print_u(unsigned int num);
int		ft_print_xX(unsigned int hex, char **str);

#endif
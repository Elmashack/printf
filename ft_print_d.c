/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 22:21:10 by elman             #+#    #+#             */
/*   Updated: 2021/07/15 00:16:22 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_print_d(int num)
{
	int	length;

	length = 0;
	if (num < 0)
	{
		length += write(1, "-", 1);
		num *= -1;
		length += ft_count_symbol(num);
		ft_putnbr_fd(num, 1);
	}
	else
	{
		length += ft_count_symbol(num);
		ft_putnbr_fd(num, 1);
	}
	return (length);
}

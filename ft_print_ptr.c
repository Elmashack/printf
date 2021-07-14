/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:51:41 by elman             #+#    #+#             */
/*   Updated: 2021/07/15 00:10:35 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_print_ptr(unsigned long address)
{
	int		len;
	char	*str;

	len = 0;
	len += write(1, "0x", 2);
	if (!address)
		len += write(1, "0", 1);
	else
	{
		len += ft_ptrlen(address);
		str = ft_putptr(address);
		if (!str)
			return (-1);
		ft_putstr_fd(str, 1);
		free(str);
	}
	return (len);
}

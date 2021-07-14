/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:11:55 by elman             #+#    #+#             */
/*   Updated: 2021/07/15 00:14:17 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_print_xX(unsigned int hex, char **str)
{
	int		len;
	char	*string;

	len = ft_hexlen(hex);
	string = ft_puthex(hex, str);
	if (!string)
		return (-1);
	ft_putstr_fd(string, 1);
	free(string);
	return (len);
}

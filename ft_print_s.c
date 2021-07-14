/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:12:37 by elman             #+#    #+#             */
/*   Updated: 2021/07/15 00:11:27 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_print_s(char *str)
{
	int		length;
	size_t	len;

	length = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	while (len > 0)
	{
		length += write(1, str++, 1);
		len--;
	}
	return (length);
}

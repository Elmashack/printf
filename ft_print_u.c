/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:33:05 by elman             #+#    #+#             */
/*   Updated: 2021/07/15 00:15:35 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_ulen(unsigned int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putu(unsigned int num)
{
	char	number[120];
	int		i;
	long	nb;

	nb = (long) num;
	i = 0;
	if (nb / 10)
		ft_putu(nb / 10);
	number[i] = nb % 10 + 48;
	write(1, &number[i++], 1);
	number[i] = '\0';
}

int	ft_print_u(unsigned int num)
{
	int		len;

	len = ft_ulen(num);
	ft_putu(num);
	return (len);
}

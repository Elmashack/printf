/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marinamamedova <marinamamedova@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:04:14 by elmas             #+#    #+#             */
/*   Updated: 2021/05/20 22:53:45 by marinamamed      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return (NULL);
	t_list	*tmp;

	tmp = lst;
	while (tmp -> next)
		tmp = tmp -> next;
	return (tmp);
}

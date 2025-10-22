/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:01:21 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/22 16:59:00 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;
	
	i = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>
int main()
{
} */

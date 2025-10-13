/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:58:31 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/13 21:58:31 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum(127));
	printf("%d\n", ft_isalnum(31));
	printf("%d\n", ft_isalnum(50));
	return (0);
}*/
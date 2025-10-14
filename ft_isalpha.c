/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:50:25 by hde-andr          #+#    #+#             */
/*   Updated: 2025/10/13 14:42:37 by hde-andr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main()
{
	int	a = ft_isalpha('2');
	if (a == 0)
		printf("THATS NOT A LETTER!");
	else
		printf("Thats a letter :)");
	return 0;
}*/
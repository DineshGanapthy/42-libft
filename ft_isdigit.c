/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:17:54 by dganapat          #+#    #+#             */
/*   Updated: 2025/10/27 10:59:21 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main()
{
	char	i;
	int	j;

	i = 5;
	j = 'A';

	printf("Is digit %d\n" , ft_isdigit(i));
	printf("Not digit %d\n" , ft_isdigit(j));

	return (0);
}*/

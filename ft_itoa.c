/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:19:43 by dganapat          #+#    #+#             */
/*   Updated: 2025/11/03 13:45:38 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	strnbr(char *str, long n, size_t *i)
{
	if (n < 0)
	{
		str[*i] = '-';
		n *= -1;
		*i = *i + 1;
	}
	if (n >= 10)
		strnbr(str, (n/10), i);
	str[*i] = (n % 10) + '0';
	*i = *i + 1;
}

char *ft_itoa(int n)
{
	size_t		i;
	char		new_string[15];

	i = 0;
	strnbr(new_string, (long)n, &i);
	return (ft_strdup(new_string));
}

int		main()
{
		int		a;

		a = -2147483648;
		printf("%s\n", ft_itoa(a));

		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:04:55 by dganapat          #+#    #+#             */
/*   Updated: 2025/11/07 17:25:15 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	
	if (!s)
		return (NULL);
	s = s + start;
	
	s1 = malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	ft_strlcpy(s1, s, (len +1));

	return (s1);
}
/*
int			main()
{
int			start;
size_t		len;

start = 6;
len  = 5;
char	*s = "Hello World";

printf("%s\n" , ft_substr(s, start, len));

return (0);

}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:23:01 by dganapat          #+#    #+#             */
/*   Updated: 2025/11/02 14:11:10 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		len_big;
	size_t		len_little;
	
	i = 0;
	j = 0;
	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
while (len > i && big[i] != '\0')
{
	while (little[j] = big[i + j] && j <)
	{
		j++;
	}
}
printf("%zu" , i);
return (NULL);
}

#include <bsd/string.h>
#include <stdio.h>
int		main()
{
	size_t		n;
	char	haystack[] = "Hello World the kimbal";
	char	needle[] = "the";

	n = 22;
	//printf("     My Function : %zu\n" , ft_strlcat(s1, s2, l));
	//printf("Orginal Function : %zu\n" , strlcat(s3, s2, l));
	//printf("New s1 : %s\n" , s1 );
	printf("New My Function : %s\n" , ft_strnstr(haystack,needle, n) );
	printf("New Orginal     : %s\n" , strnstr(haystack,needle, n) );

	return (0);
}
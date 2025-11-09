/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:35:42 by dganapat          #+#    #+#             */
/*   Updated: 2025/11/07 15:03:42 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	string_len;

	if (!s1 && !s2)
		return (NULL);
	if(!s1)
		return (strdup(s2));
	if(!s2)
		return (strdup(s1));
	
	string_len = strlen(s1) + strlen(s2);
	new_string = malloc(sizeof(char) * (string_len + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, strlen(s1));
	ft_strlcpy(new_string + strlen(s1), s2, strlen(s2));
	return (new_string);
	
}
/*int		main()
{
	char	s1[] = "Hello ";
	char	s2[] = "World";
    //char    s3[] = "Hello " ;

//	printf("     My Function : %zu\n" , ft_strlcat(s1, s2, l));
//	printf("Orginal Function : %zu\n" , strlcat(s3, s2, l));
//    printf("New s1 : %s\n" , s1 );
    printf("New String : %s\n" , (ft_strjoin(s1,s2)) );
    

	return (0);
}*/
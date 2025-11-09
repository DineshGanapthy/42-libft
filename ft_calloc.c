/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dganapat <dganapat@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:05:44 by dganapat          #+#    #+#             */
/*   Updated: 2025/11/02 14:16:29 by dganapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nelem, size_t elsize)
{
    char* new_string;
    size_t      str_len;

    str_len = strlen(s) + 1;
    new_string = malloc(sizeof(char) * str_len);
    printf("%zu\n" , str_len);
    if (s == NULL)
        return (NULL);

    ft_strlcpy(new_string, s, str_len);

    return ((char *)(new_string));
}

{
	char	*s1 = "Hello ";
	printf("Orginal function : %s\n" , strdup(s1));
	printf("My Function : %s\n" , ft_strdup(s1));
    free(new_string);

	return (0);
}
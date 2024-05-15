/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:37:51 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/20 19:39:42 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;

	while (*str != '\0')
	{
		str_ptr = str;
		find_ptr = to_find;
		while (*find_ptr != '\0' && *str_ptr == *find_ptr)
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	hay[] = "Can you find the needle?! oh I see.";
	char	needle[] = "needle";
	char	*result = ft_strstr(hay, needle);

	if (result != 0)
		printf("Look, I found the: %s\n", result);
	else
		printf("Not found, here's the og str: %s\n", hay);
	return (0);

}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:39:01 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/20 18:44:03 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char	str1[] = "apple";
	char	str2[] = "apple";
	char	str3[] = "pear";
	char	str4[] = "papaya";
	int	result1 = ft_strcmp(str1, str2);
	int	result1b = strcmp(str1, str2);
	int	result2 = ft_strcmp(str3, str4);
	int	result2b = strcmp(str3, str4);
	int	result3 = ft_strcmp(str4, str3);
	int	result3b = strcmp(str4, str3);

	printf("Result1: %d\n", result1);
	printf("System Result 1: %d\n", result1b);
	printf("Result2: %d\n", result2);
	printf("System Result 2: %d\n", result2b);
	printf("Result3: %d\n", result3);
	printf("System Result 3: %d\n", result3b);
	return (0);
}*/

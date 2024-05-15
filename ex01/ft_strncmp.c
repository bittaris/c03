/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:08:49 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/20 19:23:38 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "apple";
	char	str2[] = "apple";
	char	str3[] = "pear";
	char	str4[] = "peeps";
	int	result1 = ft_strncmp(str1, str2, 5);
	int	result1b = strncmp(str1, str2, 5);
	int	result2 = ft_strncmp(str4, str3, 7);
	int	result2b = strncmp(str4, str3, 7);
	int	result3 = ft_strncmp(str3, str4, 4);
	int	result3b = strncmp(str3, str4, 4);
	int	result4 = ft_strncmp(str3, str4, 2);
	int	result4b = strncmp(str3, str4, 2);
	
	printf("Result1: %d\n", result1);
	printf("System 1: %d\n", result1b);
	printf("Result2: %d\n", result2);
	printf("System 2: %d\n", result2b);
	printf("Result3: %d\n", result3);
	printf("System 3: %d\n", result3b);
	printf("Result4: %d\n", result4);
	printf("System 4: %d\n", result4b);
}*/

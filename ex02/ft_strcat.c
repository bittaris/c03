/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:01:39 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/20 19:22:37 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

/*int	main(void)
{
	char	og[20] = "Oh";
	char	comp[] = "Lala!";
	char	ogb[20] = "Oh";
	char	compb[] = "Lala!";

	ft_strcat(og, comp);
	strcat(ogb, compb);
	printf("Concatenated str: %s\n", og);
	printf("System: %s\n", ogb); 
	return (0);
}*/

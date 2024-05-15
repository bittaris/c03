/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:52:49 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/20 19:32:22 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}
	while (*src && nb--)
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
	char	og[30] = "Olha isso, pera la ";
	char	comp[] = "veja voce, que caos";
	char	*result = ft_strncat(og, comp, 9);
	char	ogb[30] = "Olha isso, pera la ";
	char	compb[] = "veja voce, que caos";
	char	*resultb = strncat(ogb, compb, 9);

	printf("New string: %s\n", result);
	printf("System: %s\n", resultb);
	return (0);	
}*/

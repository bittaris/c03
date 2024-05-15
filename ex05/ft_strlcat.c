/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:24:52 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/21 11:35:51 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_i;
	unsigned int	src_j;
	unsigned int	final_length;

	dest_i = 0;
	src_j = 0;
	final_length = 0;
	while (dest[dest_i] != '\0' && dest_i < size - 1)
		dest_i++;
	while (src[src_j] != '\0')
		src_j++;
	final_length = dest_i + src_j;
	while (*src != '\0' && dest_i < size - 1)
	{
		dest[dest_i] = *src;
		dest_i++;
		src++;
	}
	dest[dest_i] = '\0';
	return (dest_i);
}

/*int	main(void)
{
	char	dst[31] = "Oh wow";
	char	source[] = ", will you look at that!!!";
	unsigned int	total_length;

	printf("Original sentence: %s\n", dst);
	total_length = ft_strlcat(dst, source, sizeof(dst));
	printf("After concatenation: %s\n", dst);
	printf("Total length: %u\n", total_length);
	return (0);
}*/

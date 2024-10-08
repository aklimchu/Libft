/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:04:46 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 13:05:58 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function  erases  the  data  in the n bytes of the memory starting at 
//the location pointed to by s, by writing zeros (bytes  containing '\0') 
//to that area (libc)
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		*(char *)s = '\0';
		s++;
		i++;
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:06:13 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/17 14:01:31 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function checks whether a character is an alphabet (libc)
int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

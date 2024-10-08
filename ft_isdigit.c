/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:24:49 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/17 14:02:08 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function checks whether a character is numeric character (libc)
int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

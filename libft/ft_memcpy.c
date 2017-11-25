/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:16:11 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/02 04:25:21 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	void	*lol;

	lol = dst;
	while (n)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		dst++;
		src++;
		--n;
	}
	return (lol);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:12:54 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:41:52 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		space_test(void)
{
	char 	dest[100];
	char	dest1[100];

	if (strncat(dest,"   ", 10) == ft_strncat(dest1, "   ", 10))
		return (0);
	else
		return (-1);
}

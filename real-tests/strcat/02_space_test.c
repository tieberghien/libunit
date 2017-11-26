/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:08:19 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:50:49 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		space_test(void)
{
	char	basic_dest[50];
	char	basic_dest1[50];

	if (ft_strcat(basic_dest, "  ") == strcat(basic_dest1, "  "))
		return (0);
	else
		return (-1);
}

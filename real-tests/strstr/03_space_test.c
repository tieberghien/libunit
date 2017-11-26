/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:31:55 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:26:48 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		space_test5(void)
{
	if (ft_strstr("Premier petit test", " ") == strstr("Premier petit test", " "))
		return (0);
	else
		return (-1);
}

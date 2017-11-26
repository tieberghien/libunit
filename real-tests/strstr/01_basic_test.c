/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:26:49 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:26:28 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test5(void)
{
	if (ft_strstr("Premier petit test", "petit") == strstr("Premier petit test", "petit"))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_no_found_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:36:53 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 17:37:29 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		no_found_test(void)
{
	if (ft_strstr("Premier petit test", "42") == strstr("Premier petit test", "42"))
		return (0);
	else
		return (-1);
}

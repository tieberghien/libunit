/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_upperletter_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:16:01 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:22:49 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		upperletter_test3(void)
{
	if (ft_toupper('M') == toupper('M'))
		return (0);
	else
		return (-1);
}

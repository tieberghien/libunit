/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_negative_int_min_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:00:17 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:01:44 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>
#include "real_test.h"

int		negative_int_min_test(void)
{
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		return (0);
	else
		return (-1);
}

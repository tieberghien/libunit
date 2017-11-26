/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_negative_number_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:59:29 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:00:03 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

int		negative_number_test(void)
{
	if (ft_atoi("-42") == atoi("-42"))
		return (0);
	else
		return (-1);
}

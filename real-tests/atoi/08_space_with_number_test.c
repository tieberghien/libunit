/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_space_with_number_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:04:07 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:05:48 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

int		space_with_number_test(void)
{
	if (ft_atoi(" \t\n\v\f\r42") == atoi(" \t\n\v\f\r42"))
		return (0);
	else
		return (-1);
}

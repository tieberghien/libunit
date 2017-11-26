/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:20:42 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:31:39 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test9(void)
{
	if (ft_strcmp(ft_strdup("42 Test"), strdup("42 Test")) == 0)
		return (0);
	else
		return (-1);
}

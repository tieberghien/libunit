/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_s1_lower_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:12:50 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 13:13:41 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		s1_lower_test(void)
{
	if (ft_strcmp("abc", "azc") == strcmp("azc", "azc"))
		return (0);
	else
		return (-1);
}

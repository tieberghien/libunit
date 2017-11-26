/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:05:23 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:34:21 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_testb(void)
{
	if (ft_strcmp("abc", "abc") == strcmp("abc", "abc"))
		return (0);
	else
		return (-1);
}

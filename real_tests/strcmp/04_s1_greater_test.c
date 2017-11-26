/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_s1_greater_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:12:09 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 13:12:36 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		s1_greater_test(void)
{
	if (ft_strcmp("abz", "abc") == strcmp("abz", "abc"))
		return (0);
	else
		return (-1);
}

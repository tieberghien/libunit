/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:08:35 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:41:50 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		null_testz(void)
{
	char	basic_dest[50];
	char	basic_dest1[50];

	if (ft_strcat(basic_dest, "") == strcat(basic_dest1, ""))
		return (0);
	else
		return (-1);
}

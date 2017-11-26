/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:08:35 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 18:08:56 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		null_test(void)
{
	char	basic_dest[50];
	char	basic_dest1[50];
	char	basic_src = "";
	char	basic_src1 = "";

	if (ft_strcat(basic_dest, basic_src) == strcat(basic_dest1, basic_src1))
		return (0);
	else
		return (-1);
}

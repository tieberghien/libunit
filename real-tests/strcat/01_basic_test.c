/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:20:46 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 18:07:32 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test(void)
{
	char	basic_dest[50];
	char	basic_dest1[50];
	char	basic_src = "Add this";
	char	basic_src1 = "Add this";

	if (ft_strcat(basic_dest, basic_src) == strcat(basic_dest1, basic_src1))
		return (0);
	else
		return (-1);
}

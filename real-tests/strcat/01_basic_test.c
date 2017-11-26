/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:20:46 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:51:30 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test(void)
{
	char	basic_dest[50];
	char	basic_dest1[50];

	if (ft_strcat(basic_dest, "ADD this") == strcat(basic_dest1, "ADD this"))
		return (0);
	else
		return (-1);
}

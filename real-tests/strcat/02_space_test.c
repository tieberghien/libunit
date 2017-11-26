/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:08:19 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:41:40 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		space_testz(void)
{
	char	basic_dest[50];
	char	basic_dest1[50];
	int		result;

	result = strcmp(ft_strcat(basic_dest, "  "), strcat(basic_dest1, "  "));
	if (result == 0)
		return (0);
	else
		return (-1);
}

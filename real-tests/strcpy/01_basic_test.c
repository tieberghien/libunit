/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:44:42 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:32:38 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_testa(void)
{
	char dest1[100];
	char dest2[100];
	char cpy[100] = "Copy this";

	if (ft_strcpy(dest1, cpy) == strcpy(dest2, cpy))
		return (0);
	else
		return (-1);
}

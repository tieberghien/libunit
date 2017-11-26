/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:48:01 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:32:50 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		null_testa(void)
{
	char dest1[100];
	char dest2[100];

	if (ft_strcpy(dest1, "") == strcpy(dest2, ""))
		return (0);
	else
		return (-1);
}

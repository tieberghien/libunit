/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_only_space_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:14:35 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:33:49 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include <string.h>

int		only_space_testa(void)
{
	if (ft_strcmp("  ", "  ") == strcmp("  ", "  "))
		return (0);
	else
		return (-1);
}

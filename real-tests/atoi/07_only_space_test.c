/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_only_space_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:03:11 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:03:49 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>
#include "real_test.h"

int		only_space_test(void)
{
	if (ft_atoi("    ") == atoi("    "))
		return (0);
	else
		return (-1);
}

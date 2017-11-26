/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_number_and_letter_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:13:30 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:14:29 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<stdlib.h>
#include "real_test.h"

int		number_and_letter_test(void)
{
	if (ft_atoi("75abc") == atoi("75abc"))
		return (0);
	else
		return (-1);
}

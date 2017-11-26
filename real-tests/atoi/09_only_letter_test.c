/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_only_letter_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:12:31 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:13:12 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>
#include "real_test.h"

int		only_letter_test(void)
{
	if (ft_atoi("abc") == atoi("abc"))
		return (0);
	else
		return (-1);
}

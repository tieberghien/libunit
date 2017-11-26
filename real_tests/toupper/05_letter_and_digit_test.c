/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_letter_and_digit_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:17:10 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 15:17:57 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		letter_and_digit_test(void)
{
	if (ft_toupper("ma42jY!") == toupper("ma42jY!"))
		return (0);
	else
		return (-1);
}

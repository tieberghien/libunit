/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:43:30 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 19:47:18 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		ok_test(void)
{
	if (ft_atoi("42") == atoi("42"))
		return (0);
	else
		return (-1);
}
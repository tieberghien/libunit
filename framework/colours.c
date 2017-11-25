/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colours.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:05:34 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 18:08:24 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void		colourize(char *colour, char *res)
{
	ft_putstr(colour);
	ft_putstr(res);
	ft_putendl(RESET);
}

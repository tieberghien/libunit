/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:19:35 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 10:28:29 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_result(int i)
{
	 // Ne pas oublier d'afficher le nom de la fonction + nom de chaque test
	 // sur la sortie standard
	if (i == 0)
	{
		ft_putstr("[OK]");
	}
	else
	{
		ft_putstr("[KO]");
		ft_putstr("[SEGV]");
		ft_putstr("[BUSE]");
		// recuperer le signal pour afficher le bon message d'erreur 
	}
}

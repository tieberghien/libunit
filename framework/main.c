/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 23:01:29 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 10:19:18 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	pid_t	strlen;

	strlen = fork();
	if (strlen > 0)
	{
		wait();
		
	}
	if (strlen == 0)
	{
		execve("/bin/libunit/real-test/strlen", av, NULL);
		// verifier si c'est bien comme cela qu on doit executer
	}

	// Fin execution des tests afficher les resultats. Mais du coup ils sont stockes dans les forks?
	// Voir pour recuperer les signaux
}

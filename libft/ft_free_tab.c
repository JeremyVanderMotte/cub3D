/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgelin <rgelin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:49:24 by rgelin            #+#    #+#             */
/*   Updated: 2022/03/29 15:22:46 by rgelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_tab(char **tab)
{
	int	i;

	i = -1;
	while (tab && tab[++i])
	{
		free(tab[i]);
		tab[i] = NULL;
	}
	if (tab)
	{
		free(tab);
		tab = NULL;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhope <lhope@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:37:54 by lhope             #+#    #+#             */
/*   Updated: 2025/07/13 18:36:11 by lhope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, 'N', 1);
	else
		write(1, 'P', 1);
}

/*
int	main(vodi)
{
	ft_is_negative('5');
	return (0);
}

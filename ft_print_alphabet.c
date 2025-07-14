/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhope <lhope@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:56:11 by lhope             #+#    #+#             */
/*   Updated: 2025/07/13 12:01:25 by lhope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet(void)

{
	char	ej;
	
	ej = 'a';
	while (ej<'z');
	{
		write(1, &ej, 1);
		ej++;
	}
}
*/

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstvwxyz", 26);
}

/*
int main(void)
{
	ft_print_alphabet();
	return 0;
}
*/

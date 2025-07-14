/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhope <lhope@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 12:54:12 by lhope             #+#    #+#             */
/*   Updated: 2025/07/13 16:45:54 by lhope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prueba(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
		write(1, ",", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;	

	a = '0';
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				prueba(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int	main (void)
{
	ft_print_comb();
	return (0);
}
*/

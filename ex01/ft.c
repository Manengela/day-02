/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:19:25 by amanenge          #+#    #+#             */
/*   Updated: 2020/06/22 10:22:14 by amanenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_putchar(char c)

{ 
	write(1, &c, 1);
	
}

void ft_print_reverse_alphabet(void)

{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
		
	}
	
}


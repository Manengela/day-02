/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:50:38 by amanenge          #+#    #+#             */
/*   Updated: 2020/06/19 16:21:17 by amanenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_alphabet(void)
{
	char letter;
	
	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementchaput <clementchaput@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:50:16 by clementchap       #+#    #+#             */
/*   Updated: 2025/10/15 18:26:33 by clementchap      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_putnbr(int i)
{
	if(i == -2147483648)
		write(1, "-2147483648", 11);
	if (i < 0)
    {
        ft_putchar('-');
        i = -i;
    }
	if(i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + 48);
	}
	if(i < 10)
		ft_putchar(i + 48);
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
        i++;
    return(i);
}



int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\f'
			|| c == '\n' || c == '\r')
        return(1);
    return(0);
}

int		ft_count_words(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (ft_is_whitespace(str[i]) != 0)
			i++;
		if (str[i] == '\0')
			break ;
		while (ft_is_whitespace(str[i]) != 1 && str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

char **ft_split(char *str)
{
    int nb_words = ft_count_words(str);
    
}

int main(void)
{
    int i;
    i = ft_count_words("salut je suis fabio   ");
    ft_putnbr(i);
    return(0);
}

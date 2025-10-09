/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiochaput <fabiochaput@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:51:24 by fabiochaput       #+#    #+#             */
/*   Updated: 2025/10/10 00:42:19 by fabiochaput      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int i)
{
    if(i == -2147483648)
        write(1, "-2147483648", 11);
    if(i < 0)
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



int main(int argc, char *argv[])
{
	char dest[50] = "dest";
    char c = 'e';
    int i;
	char *range;
	ft_putnbr(argc - 1);
	range = ft_strjoin(argc - 1, argv, ", ");
	printf("%s\n", range);
    return 0;
}

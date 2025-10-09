/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiochaput <fabiochaput@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:51:24 by fabiochaput       #+#    #+#             */
/*   Updated: 2025/10/08 14:27:47 by fabiochaput      ###   ########.fr       */
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

int ft_strj_sizetomalloc(char **strs)
{
	int i;
	int j;
	int ij;

	while(strs[i+1][j])
	{
		while (strs[i+1][j])
			j++;
		j = 0;
		i++;
	}
	ij = i + j;
	return(ij);
}

int main(int argc, char *argv[])
{
	char dest[50] = "dest";
    char c = 'e';
    int i;
	int *range;
	i = ft_strj_sizetomalloc(argv);
	ft_putnbr(i);
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabiochaput <fabiochaput@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:33:10 by fabiochaput       #+#    #+#             */
/*   Updated: 2025/10/06 22:45:50 by fabiochaput      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int ft_strlen(char *str)
{
    int i;
    i = 0;
    
    while(str[i] != '\0')
        i++;
    return(i);
}

char    *ft_strcpy(char *dst, char *src)
{
    int i = 0;
    
    while(src[i] != '\0')
    {
        src[i] = dst[i];
        i++;
    }
    return(dst);
}

char    *ft_strncpy(char *dst, char *src, int max)
{
    int i = 0;
    
    while(src[i] != '\0' && i <= max)
    {
        src[i] = dst[i];
        i++;
    }
    return(dst);
}

char *ft_strncat(char *dst, char *src, int max)
{
    int i = 0;
    int j = 0;
	
	while (dst[i] != '\0')
		i++;
    while (src[j] != '\0' && j < max)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

int	ft_strchr(char *str, char c)
{
    int i = 0;

    while (str[i] != '\0')
	{
		if(str[i] == c)
			return(i);
		i++;
	}
	return (0);
}

char *ft_strstr(char *str, char *str_bis)
{
	int i = 0;
	int j = 0;
	if(str_bis[j] == '\0')
		return(str);
	while(str[i] != '\0')
	{
		while(str[i + j] == str_bis[j] && str_bis[j] != '\0')
		{
			j++;
			if (str_bis[j] == '\0')
				return(&str[i]);
		}
		j = 0;
		i++;
	}
	return(NULL);
}

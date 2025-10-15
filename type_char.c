/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementchaput <clementchaput@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:00:04 by fabiochaput       #+#    #+#             */
/*   Updated: 2025/10/15 18:26:47 by clementchap      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_isalpha(char c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return(1);
    return(0);
}

int ft_isdigits(char c)
{
    if(c >= 48 && c <= 57)
        return(1);
    return(0);
}

int ft_isalnum(char c)
{
    if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return(1);
    return(0);
}

int ft_isascii(char c)
{
    if(c >= 0 && c <= 127)
        return(1);
    return(0);
}

int	ft_isprintable(char c)
{
    if(c >= 32 && c <= 126)
        return(1);
    return(0);
}

char	ft_toupper(char c)
{
	if(c >= 97 && c <= 122)
		c = (c - 32);
	return(c);
}

char	ft_tolower(char c)
{
	if(c >= 65 && c <= 90)
		c = (c + 32);
	return(c);
}

/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   convert_int.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fabiochaput <fabiochaput@student.42.fr>	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/10/06 15:00:04 by fabiochaput	   #+#	#+#			 */
/*   Updated: 2025/10/08 14:15:09 by fabiochaput	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int i)
{
	if(i == 2147483647)
		write(1, "2147483647", 11);
	
	if(i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + 48);
	}
	if(i < 10)
		ft_putchar(i + 48);
}



char	*ft_strdup(char *src)
{
	int i = 0;
	char *dst;

	while(src[i] != '\0')
		i++;
	dst = malloc(i * sizeof(char));
	if (dst == NULL)
		return (0);
	i = 0;
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

int *ft_range(int min, int max)
{
	int i = 0;
	int *range;
	int size_to_malloc = max - min;
	
	range = malloc(size_to_malloc * sizeof(int));
	
	while(i < size_to_malloc)
	{
		range[i] = i;
		i++;
	}
	return(range);
}
int ft_strj_sizetomalloc(char **strs)
{
	int i;
	int j;
	int ij;

	while(strs[i][j])
	{
		while (strs[i][j])
			j++;
		j = 0;
		i++;
	}
	ij = i + j;
	return(ij);
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	
	while(strs[i][j])
	{
		while (strs[i][j])
			j++;
		j = 0;
		i++;
	}
	
}
	

(
strjoin
split
atoi
itoa
)
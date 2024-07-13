/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 23:02:04 by muosman           #+#    #+#             */
/*   Updated: 2024/07/14 01:55:47 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	length;
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}


#include <stdio.h>
int main ()
{
	char arr[] = {"emir"};
	int len = ft_strlen(arr);
	printf("BU ARRAYIN UZUNLUGU %d\n", len);
	
	

}
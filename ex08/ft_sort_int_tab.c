/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muosman < muosman@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:08:18 by muosman           #+#    #+#             */
/*   Updated: 2024/07/14 02:07:19 by muosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i +1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
#include <stdio.h>

int main ()
{
	// array input = 325461
	//array output = 123456
	int arr[] = {3,2,5,4,6,1};
	int size = 6;
	int	a;
	a = 0;
	ft_sort_int_tab (arr, size);
	while (a < size)
	{
		printf("%d", arr[a]);
		a++;
	}
}

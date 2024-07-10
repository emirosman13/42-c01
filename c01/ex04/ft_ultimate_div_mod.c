/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:17:46 by marvin            #+#    #+#             */
/*   Updated: 2024/07/11 00:17:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
   int temp_a = *a;
    *a = *a / *b;
    *b = temp_a % *b;

}

int main()
{
    int a = 35;
    int b = 20;
   

    ft_ultimate_div_mod(&a, &b);
    printf("%d", a);
    printf(" ");
    printf("%d", b);


}
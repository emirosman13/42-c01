/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:00:04 by marvin            #+#    #+#             */
/*   Updated: 2024/07/10 20:00:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

    
}

int main()
{
    
    int sayi1;
    int sayi2;
    
    ft_div_mod(20, 15, &sayi1, &sayi2);
    
    printf("BOLMEDEN KALAN SONUC %d", sayi1);
    printf("\n");
    printf("MOD ALMADAN KALAN %d", sayi2);
    
    return (0);


}
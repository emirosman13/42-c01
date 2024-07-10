/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:51:18 by marvin            #+#    #+#             */
/*   Updated: 2024/07/10 18:51:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;

}

int main(void)
{
    int a;
    a = 0;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********j = &h;
    ft_ultimate_ft(&j);
    printf("%d", a);

}
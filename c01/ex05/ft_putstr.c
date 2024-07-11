/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:12:17 by marvin            #+#    #+#             */
/*   Updated: 2024/07/11 13:12:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {
        write (1, str, 1);
        str++;

    }

}



int main(void)
{
    char std[] = {"STDOUT"};
    
    int i = 0;
   

    
    ft_putstr(std);
    return (0);

}
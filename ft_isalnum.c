
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maygen <maygen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:00:40 by maygen            #+#    #+#             */
/*   Updated: 2022/10/16 12:00:40 by maygen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int a)
{
    if(ft_isdigit(a) || ft_isalpha(a))
    {
        return 1;
    }
    return 0;
}

/*int main(void) {
    char c1 = 'B', c2 = '7', c3 = '&';

    printf("%c alfanumerik bir karakter%s\n", c1, ft_isalnum(c1) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s\n", c2, ft_isalnum(c2) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s", c3, ft_isalnum(c3) ? "dir!" : " değildir!");

    return 0;
}*/
/*
beklenen çıktı
B alfanumerik bir karakterdir!
7 alfanumerik bir karakterdir!
& alfanumerik bir karakter değildir!
*/

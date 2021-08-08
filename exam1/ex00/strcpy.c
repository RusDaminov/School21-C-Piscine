/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:03:18 by abernita          #+#    #+#             */
/*   Updated: 2021/07/29 15:03:25 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char dest[] = "Villariba";
    char src[] = "Neapolitano";

    printf("%s\n", dest);
    printf("%s\n", src);  
    ft_strcpy(dest, src);
    printf("%s\n", dest);
    return (0);
}

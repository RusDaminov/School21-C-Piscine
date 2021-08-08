/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:20:46 by abernita          #+#    #+#             */
/*   Updated: 2021/07/30 19:54:19 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void Display(char c){
  write(1, &c, 1);
}

void repeat_alpha(char *str)
{
    int i;
    int j;
    int count;

	i = 0;
    while(str[i] !='\0')
    {
      if (str[i] >= 'a' && str[i] <='z')
       {
        count = (str[i] - 96);
        while(j < count)
        {
          Display(str[i]);
          j++;
        }
    }
	 else if (str[i] >= 'A' && str[i] <='Z')
    {
    count = (str[i] - 64);
    while(j < count)
      {
          Display(str[i]);
          j++;
        }
    }
    else
      Display(str[i]);
    i++;
    j = 0;
    count = 0;
  }
}

int main() {
  repeat_alpha(" a 3 D 0");
  return 1;
}

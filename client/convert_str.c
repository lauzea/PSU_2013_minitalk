/*
** convert_str.c for convert_base in /home/genesis/rendu/PSU_2013_minitalk
**
** Made by DerpGenesis
** Login   <genesis@epitech.net>
**
** Started on  Wed Mar 12 17:26:42 2014 DerpGenesis
** Last update Sun Mar 23 21:04:39 2014 DerpGenesis
*/

#include <stdlib.h>
#include "../minitalk.h"

int	convert_str(int n)
{
    int   i;
    int   *t;

    t = malloc(8 * sizeof(int));
    i = 7;
    while (n > 0)
      {
	t[i] = n % 2;
	n = n / 2;
	i--;
      }
    return (t);
}
